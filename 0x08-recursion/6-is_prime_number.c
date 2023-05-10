#include "main.h"

/**
 * is_prime_helper - checks whether n is divisible by divisor.
 * @n: the number to check
 * @divisor: the divisor to check
 *
 * Return: 1 if n is prime, 0 otherwise.
 */
int is_prime_helper(int n, int divisor)
{
	if (divisor == 1)
	{
		return (1);
	}
	else if (n % divisor == 0)
	{
		return (0);
	}
	else
	{
		return (is_prime_helper(n, divisor - 1));
	}
}

/**
 * is_prime_number - checks whether a number is prime.
 * @n: the number to check.
 *
 * Return: 1 if n is prime, 0 otherwise.
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else
	{
		return (is_prime_helper(n, n - 1));
	}
}
