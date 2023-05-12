#include "main.h"

/**
 *_isupper- checks if the character is uppercase
 *@c: character to print
 *
 *
 *Return: 1 if character is upper and 0 for otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
