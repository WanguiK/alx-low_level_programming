#include "main.h"

/**
 * _atoi - changes a string to an int
 * @s: the string to be changed
 *
 * Return: the converted int
 */
int _atoi(char *s)
{
	int sign = 1;
	int result = 0;

	while (*s)
	{
		if (*s == '-')
		{
			sign = -sign;
		}
		else if (*s >= '0' && *s <= '9')
		{
			result = result * 10 + (*s - '0');
		}
		else if (result != 0)
		{
			s++;
		}
	}
	return (result * sign);
}
