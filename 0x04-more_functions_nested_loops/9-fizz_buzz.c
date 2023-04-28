#include "main.h"

/**
 * main - Fizzbuzz test
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;

	for (i = 0; i <= 99; i++)
	{
		if (i % 3  == 0)
		{
			printf("Fizz");
		}
		if (i % 5  == 0)
		{
			printf("Buzz");
		}
		if (i % 3  == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
		}
		if (i % 3 != 0 && 1 % 5 != 0)
		{
			printf("%d", i);
		}
	printf("\n");
	}
	return (0);
}
