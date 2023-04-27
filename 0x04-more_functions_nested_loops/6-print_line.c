#include "main.h"

/**
 *print_line- draws a straight line
 *@n: parameter
 *
 *Return: \n if n is equal or less than 0
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	if (n <= 0)
	{
		_putchar('\n');
	}
	_putchar('\n');
}
