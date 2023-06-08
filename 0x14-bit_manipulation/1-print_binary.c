#include <stdio.h>
#include "main.h"

/**
 * print_binary- prints the binary representation of a number
 * @n: number to print
 * Return: 0 Always
 */
void print_binary(unsigned long int n)
{
	unsigned long int i;

	for (i = 1 << 31; i > 0; i = i / 2)
	{
		_putchar((n & 1) ? '1' : '0');
	}
}
