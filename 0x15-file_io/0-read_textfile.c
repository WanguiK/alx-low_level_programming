#include "main.h"
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * read_textfile- reads a text file and prints it to the POSIX standard output
 * @filename : text file to be read
 * @letters: characters to be counted
 * Return: the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *fp;

	if (filename == NULL)
	{
		return (0);
	}

	fp = open(filename, "r");
	if (fp == -1)
	{
		return (0);
	}
	char *buf = malloc(sizeof(char) * letters);

	if (buf == NULL)
	{
		close(fp);
		return (0);
	}

	ssize_t bytesRead = read(fd, buf, letters);

	if (bytesRead == -1)
	{
		free(buf);
		close(fp);
		return (0);
	}
	ssize_t bytesWritten = write(STDOUT_FILENO, buf, bytesRead);

	free(buf);
	close(fp);

	if (bytesWritten == -1 || bytesWritten != bytesRead)
	{
		return (0);
	}
	return (bytesRead);
}
