#include "main.h"
#include <stdlib.h>

/*
 * create_array- creates an array of chars,
 * and initializes it with a specific char
 * @c: specific char to intiliaze
 * @size: size of the array
 *
 * Return: a pointer to the array, or NULL if it fails
 * or  size = 0
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	s = malloc((size + 1) * sizeof(char));
	if (s == 0)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		s[i] = c;
	}
	s[size] = '\0';
	return (s);
}
