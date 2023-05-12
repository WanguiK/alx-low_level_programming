#include "main.h"
#include <stdlib.h>

/**
 * main- multiplies two numbers
 * @argv: argument vector
 * @argc: argument count
 *
 * Return: 0 in success and 1 in Error
 */
int main(int argc, char *argv[])
{
	int num1, num2, product;

	if (argc == 3)
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		product = num1 * num2;

		printf("%d\n", product);
	}
	else if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
