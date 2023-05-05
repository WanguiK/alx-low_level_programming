#include <stdio.h>

/**
 *print_array-  prints n elements of an array of integers,
 *	followed by a new line
 *@n: number of elements of the array to be printed
 *@a: characters to be printed
 *
 *
 *Return: 0 Always
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
	if (i != n - 1)
	{
		printf(", ");
	}
	}
	printf("\n");
}
