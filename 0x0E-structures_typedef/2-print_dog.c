#include <stdio.h>
#include "dog.h"

/**
 * print_dog- prints a struct dog
 * @d: name of struct
 *
 * Return: NULL if an element of d is null or d is null
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	printf("Name: %s\n", (d->name != NULL) ? d->name : "(nil)");
	printf("Age: %.1f\n", d->age);
	printf("Owner: %s\n", (d->owner != NULL) ? d->owner : "(nil)");
}
