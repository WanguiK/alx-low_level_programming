#include "main.h"

/**
 *_islower- prints 1 if the character is lowercase
 *@c: The character to print
 *
 *Return: Always 0.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
		}
		else
		{
		return (0);
		}
}
