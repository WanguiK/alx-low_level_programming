#include "main.h"

/**
 *print_rev- prints a string, in reverse, followed by a new line
 *@s: the string to print
 *
 *
 *Return: 0 Always
 */
void print_rev(char *s)
{
	int i;

	while (s[i] != '\0')
	{
		i++;
	}
	{
		for (i--; i >= 0; i--)
		{
			_putchar(s[i]);
		}
	}
	_putchar('\n');
}
