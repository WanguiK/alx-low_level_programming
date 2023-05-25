#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * sum_them_all- returns the sum of all its parameters
 * @n: integers
 *
 * Return: 0 if n = 0
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum = 0;
	unsigned int i;

	va_list ptr;

	va_start(ptr, n);

	if (n == 0)
	{
		return (0);
	}
	for (i = 0; i < n; i++)
	{
		sum += va_arg(ptr, unsigned int);
	}
	va_end(ptr);
	return (sum);
}
