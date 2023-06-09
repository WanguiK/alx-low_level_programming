#include "function_pointers.h"

/**
 * int_index- searches for an integer
 * @size: is the number of elements in the array
 * @array: array of integers
 * @cmp: to compare
 *
 * Return: 0 if size <= 0 or -1 if it fails
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
	}
	return (-1);
}
