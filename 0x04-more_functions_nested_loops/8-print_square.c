#include "main.h"

/**
 *print_square - prints square
 *@size: parameter
 *
 * Return: /n if size is less than or equal to 0
 */
void print_square(int size)
{
	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			_putchar('#');
				if (size <= 0)
				{
					_putchar('\n');
				}
		}
		_putchar('\n');
	}
}
