#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase and then uppercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c = 'a';
	char c = 'A';
	
	while (c <= 'z')
	while (c <= 'Z')
{
	putchar (c);
	c++;
	putchar (c);
	c++;
}
	putchar ('\n');
	return (0);
}
