#include "main.h"

/**
 *swap_int- swaps the values of two integers
 *@a: integer to swap
 *@b: integer to swap
 *
 *
 *Return: 0 Always
 */
void swap_int(int *a, int *b)
{
	int per = *a;

	*a = *b;
	*b = per;
}
