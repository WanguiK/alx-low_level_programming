#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: head pointer of the double linked list
 * @idx: index of the list where the new node should be added
 * @n: value to be stored in the new node
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *current = *h;

	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;
	if (idx == 0)
	{
		new_node->next = *h;
		if (*h != NULL)
		{
			(*h)->prev = new_node;
		}
		*h = new_node;
		return (new_node);
	}
	while (current != NULL)
	{
		if (i == idx - 1)
		{
			new_node->prev = current;
			new_node->next = current->next;
			if (current->next != NULL)
			{
				current->next->prev = new_node;
			}
			current->next = new_node;
			return (new_node);
		}
		current = current->next;
		i++;
	}
	free(new_node);
	return (NULL);
}
