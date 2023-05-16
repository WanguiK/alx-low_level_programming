#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*
 * str_concat - concatenates two strings
 * @s1: character
 * @s2: character
 *
 * Retur NULL Oon failure
 */
char *str_concat(char *s1, char *s2)
{
	int i;
	int j = strlen(s2);
	char *s;

	if (s1 == NULL && s2 == NULL)
	{
		return (" ");
	}
	for (i = 0; s2[i]; i++)
	s = malloc((strlen(s1) + j + 1) * sizeof(char));
	if (s == NULL)
	{
		return (NULL);
	}
	strcpy(s, s1);
	strcat(s, s2);
	return (s);
}
