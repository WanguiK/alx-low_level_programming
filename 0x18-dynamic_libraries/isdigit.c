#include "main.h"

/**
 *_isdigit- checks for digits from 0 to 9
 *@c: character to print
 *
 *
 *Return: 1 if character is a digit and 0 for otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
