#include "main.h"
#include <stdlib.h>

/*
 * strdup- returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter
 * @str: string to copy
 *
 * Return: NULL if str = NULL,on success  returns a pointer to
 * the duplicated string or NULL if memory was unavailable
 */
char *_strdup(char *str)
{
	int i;
	char *s;
	int c;

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
		;
	s = malloc(i * sizeof(*s) + 1);
	if (s == NULL)
	{
		return (NULL);
	}
	for (c = 0; c < i; c++)
	{
		s[c] = str[c];
	}
	s[c] = '\0';
	return (s);
}
