#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - Concatenates two strings
 * @s1: Source string
 * @s2: Destination string
 * @n: Number of bytes from s2 to concatenate
 *
 * Return: Pointer to the concatenated string, or NULL on failure
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *t;
	unsigned int len1 = 0, len2 = 0, k = 0;
	unsigned int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = strlen(s1);
	len2 = strlen(s2);
	if (n >= len2)
		n = len2;

	k = len1 + n + 1;
	t = malloc(k * sizeof(char));
	if (t == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len1; i++)
		t[i] = s1[i];
	for (j = 0; j < n; j++, i++)
		t[i] = s2[j];
	t[i] = '\0';
	return (t);
}
