#include "main.h"

/**
 * flip_bits - counts the number of bits to flip to convert from n to m
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int y = n ^ m;
	unsigned int count = 0;

	while (y != 0)
	{
		y = y & (y - 1);
		count++;
	}
	return (count);
}
