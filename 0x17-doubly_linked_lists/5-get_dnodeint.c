#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * get_dnodeint_at_index-  returns the nth node of a dlistint_t linked list
 * @head: head pointer of the double linked list
 * @index: the position of the pointer to be found
 * Return: the nth node of the list
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t current = *head;

	while (current != NULL)
	{
		if (i == index)
		{
			return (current);
		}
		current = current->next;
		i++;
	}
	return (NULL);
}
