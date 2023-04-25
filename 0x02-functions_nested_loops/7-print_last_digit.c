#include "main.h"

/**
 *print_last_digit- prints last digit of an integer
 *@n: The character to print
 *
 *Return: Always 0.
 */
int print_last_digit(int n)
{
	if (n < 0)
	{
		n = -n;
	}
	{
	int last_digit = n % 10;

	_putchar ('0'+ last_digit);
	return (last_digit);
	}
}
