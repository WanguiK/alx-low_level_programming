#include "main.h"
#include <stdlib.h>
#include <ctype.h>
#include <stdio.h>

/**
 * main- adds positive numbers
 * @argv: argument vector
 * @argc: argument count
 *
 * Return: 0 in success and 1 in Error
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc == 0)
	{
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		int j;

		for (j = 0; argv[i][j]; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
	sum = sum + atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
