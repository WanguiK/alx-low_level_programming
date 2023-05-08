#include "main.h"

/**
 *_memset- fills memory with a constant byte
 *@s: the address of the memory to fill
 *@n: size of the memory to fill
 *@b: constant byte
 *
 *Return: 0 Always
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
