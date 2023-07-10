#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * create_file- creates a file
 * @filename: file to be created
 * @text_content: material to be in the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fp = 0;

	if (filename == NULL)
	{
		return (-1);
	}

	fp = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);

	if (fp == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		ssize_t text_length = strlen(text_content);
		ssize_t bytes_written = write(fp, text_content, text_length);

		if (bytes_written == -1)
		{
			close(fp);
			return (-1);
		}
	}
	close(fp);
	return (1);
}
