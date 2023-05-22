#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
  * new_dog - creates a new struct of type dog
  * @name: struct parameter name
  * @age: struct parameter age
  * @owner: struct parameter owner
  *
  * Return: NULL if function fails
  */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *s;

	s = malloc(sizeof(dog_t));
	if (s == NULL)
	{
		return (NULL);
	}
	s->name = malloc(strlen(name) + 1);
	s->owner = malloc(strlen(owner) + 1);
	if (s->name == NULL || s->owner == NULL)
	{
		free(s->name);
		free(s->owner);
		free(s);
		return (NULL);
	}
	strcpy(s->name, name);
	strcpy(s->owner, owner);

	s->age = age;
	return (s);
}
