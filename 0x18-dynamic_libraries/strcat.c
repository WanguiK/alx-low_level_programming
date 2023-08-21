#include "main.h"

/**
 * _strcat- concatenates two strings
 * @dest: destination
 * @src: string
 *
 * Return:  pointer to the resulting string
 * @dest
 *
 */
char *_strcat(char *dest, char *src)
{
	char *i = dest;

	while (*i != ('\0'))
	{
		i++;
	}
	while (*src != ('\0'))
	{
		*i = *src;
		i++;
		src++;
	}
	*i = ('\0');
	return (dest);
}
