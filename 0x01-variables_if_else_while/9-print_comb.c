#include <stdio.h>

/**
 * main - Prints all possible combinations of single-digit numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c = '0';

	while (c <= '9')
{
	putchar (c);
	putchar (',');
	putchar (' ');
	c++;
}
	putchar ('\n');
	return (0);
}
