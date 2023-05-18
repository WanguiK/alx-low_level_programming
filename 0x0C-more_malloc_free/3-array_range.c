#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * array_range - creates an array of integers
 * @min: integer
 * @max: integer
 *
 * Return: pointer to array,if failure NULL
 */
int *array_range(int min, int max)
{
	int *s;
	int i, j;

	s = malloc((max - min + 1) * sizeof(int));
	if (s == NULL)
	{
		return (NULL);
	}
	if (min > max)
	{
		return (NULL);
	}
	i = 0;
	j = min;
	while (j <= max)
	{
		s[i] = j;
		i++;
		j++;
	}
	return (s);
}
