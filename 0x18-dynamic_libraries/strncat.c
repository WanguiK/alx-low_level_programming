#include "main.h"

/**
 * _strncat-concatenates two strings with a length limit
 * @dest: destination of the concatenated string
 * @src: string
 * @n: number of bytes
 *
 * Return:  pointer to the resulting string @dest
 */
char *_strncat(char *dest, char *src, int n)
{
	char *i = dest;
	int j;

	while (*i != ('\0'))
	{
		i++;
	}
	while (*src != ('\0') && j < n)
	{
		*i = *src;
		j++;
		i++;
		src++;
	}
	*i = ('\0');
	return (dest);
}
