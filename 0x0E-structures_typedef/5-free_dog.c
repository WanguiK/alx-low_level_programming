#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * free_dog-  frees dogs
 * @d: pointer to struct
 *
 * Return: 0 Always
 */
void free_dog(dog_t *d)
{
	if (d)
	{
	free(d->name);
	free(d->owner);
	free(d);
	}
}
