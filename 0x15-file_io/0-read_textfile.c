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
	char *s;
	FILE *fp;
	ssize_t w;
	ssize_t r;

	fp = fopen(filename, "r");
	if (fd == NULL)
	{
		return (0);
	}
	s = malloc(sizeof(char) * letters);
	r = read(fp, s, letters);
	w = write(STDOUT_FILENO, s, r);

	free(s);
	close(fp);
	return (w);
}
