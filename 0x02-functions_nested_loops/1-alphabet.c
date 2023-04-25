#include "main.h"

/**
 * print_alphabet- prints the alphabet in lowercase
 *
 * Description: This function prints the lowercase alphabet using the _putchar
 *              function. It starts with 'a' and ends with 'z', followed by a
 *              newline character
 *
 * Return: Always 0
 */
void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
	_putchar(c);
	c++;
	}
	_putchar('\n');
}
