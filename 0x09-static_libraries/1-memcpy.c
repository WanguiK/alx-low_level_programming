#include "main.h"

/**
 *_memcpy- copies memory area
 *@dest: the address of the memory to fill
 *@n: size of the memory to fill
 *@src: source of data to be copied
 *
 *Return:to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
