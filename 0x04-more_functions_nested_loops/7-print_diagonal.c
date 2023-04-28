#include "main.h"

/**
 *print_diagonal- draws a diagonal line
 *@n: parameter
 *
 *Return: \n if n is equal or less than 0
 */
void print_diagonal(int n)
{
	int i,j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		_putchar('\\');
		if (n <= 0)
		{
			_putchar('\n');
		}
		_putchar('\n');
	}
}
