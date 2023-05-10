#include "main.h"

/**
 * factorial- returns the factorial of a given number
 * @n: number for which factorial is given
 *
 * Return: -1 if n is negative and 1 if n is equal to 0
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
