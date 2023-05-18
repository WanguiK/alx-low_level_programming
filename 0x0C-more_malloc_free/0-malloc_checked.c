#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: number of bytes to allocate
 *
 * Return: pointer to the allocated memory
 * if it fails process termination with a status value of 98
 */
void *malloc_checked(unsigned int b)
{
	unsigned int *i;

	i = malloc(b);
	if (i == NULL)
	{
		exit (98);
	}
	return (i);
}
