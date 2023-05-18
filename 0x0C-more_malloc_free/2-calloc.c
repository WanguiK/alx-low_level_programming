#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: number of elemnts in the array
 * @size: number of bytes
 *
 * Return: pointer to the memory or NULL on failure
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *s;

	if (nmemb == 0)
	{
		return (NULL);
	}
	if (size == 0)
	{
		return (NULL);
	}
	s = malloc(sizeof(int) * size);
	if (s == NULL)
	{
		return (NULL);
	}
	return (s);
}
