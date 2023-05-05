#include "main.h"

/**
 * puts_half - prints the second half of a string, followed by a new line
 * @str: pointer to the string to be printed
 *
 *Return: O Always
 */
void puts_half(char *str)
{
	int n, len = 0;

	while (str[len] != '\0')
	{
		len++;
	}
	if (len % 2 != 0)
	{
		n = (len - 1) / 2;
	}
	else
	{
		n = len / 2;
	}
	for (; n < len; n++)
	{
		_putchar(str[n]);
	}
	_putchar('\n');
}
