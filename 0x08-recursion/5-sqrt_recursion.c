#include "main.h"

/**
 * _sqrt_recursion- returns the natural square root of a number
 * @n: the number to calculate the square root of
 *
 * Return: -1 if n does not have a natural square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (n);
	}
	else
	{
		return _sqrt_recursion(n, 1, n / 2);
	}
}

/**
 * sqrt_recursive - recursive helper function for _sqrt_recursion
 * @n: the number to calculate the square root of
 * @min: the minimum possible square root value
 * @max: the maximum possible square root value
 *
 * Return: the natural square root of n, or -1 if n does not have a natural square root
 */
int sqrt_recursive(int n, int min, int max)
{
	int mid = (min + max) / 2;

	if (mid == min)
	{
		return (-1);
	}
	else if (mid * mid == n)
	{
		return (mid);
	}
	else if (mid * mid > n)
	{
		return (sqrt_recursive(n, min, mid - 1));
	}
	else
	{
		return (sqrt_recursive(n, mid, max));
	}
}
