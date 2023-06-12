#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>

#define BUFFER_SIZE 1024

/**
 * print_error_and_exit - Print error message and exit with specified code.
 * @message: Error message to print.
 * @exit_code: Exit code to use.
 */
void print_error_and_exit(const char *message, int exit_code)
{
	dprintf(STDERR_FILENO, "%s\n", message);
	exit(exit_code);
}

/**
 * main - Entry point of the program.
 * @argc: Number of command-line arguments.
 * @argv: Array of command-line arguments.
 *
 * Return: 0 on success.
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to, read_bytes, write_bytes;
	char buffer[BUFFER_SIZE];
	mode_t permissions = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	if (argc != 3)
		print_error_and_exit("Usage: cp file_from file_to", 97);

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
		print_error_and_exit("Error: Can't read from file", 98);

	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, permissions);
	if (fd_to == -1)
		print_error_and_exit("Error: Can't write to file", 99);

	while ((read_bytes = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		write_bytes = write(fd_to, buffer, read_bytes);
		if (write_bytes == -1)
			print_error_and_exit("Error: Can't write to file", 99);
	}

	if (read_bytes == -1)
		print_error_and_exit("Error: Can't read from file", 98);

	if (close(fd_from) == -1)
		print_error_and_exit("Error: Can't close fd", 100);

	if (close(fd_to) == -1)
		print_error_and_exit("Error: Can't close fd", 100);

	return (0);
}
