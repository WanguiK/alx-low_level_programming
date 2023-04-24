#include <stdio.h>

/**
 * main - Prints all single digit numbers of base 10 starting from 0
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int c = '0';

	while (c <= '9')
{
	putchar (c);
	c++;
}
	putchar ('\n');
	return (0);
}
