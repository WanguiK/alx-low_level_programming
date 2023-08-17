#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index- inserts a new node at a given position
 * @h: head pointer of the double linked list
 * @n: value to be stored in the new node
 * @idx:  index of the list where the new node should be added
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newNode = add_dnodeint(n);

	if (*h == NULL)
	{
		if (idx != 0)
		{
			free(newNode);
			return (NULL);
		}
		*h = newNode;
		return (newNode);
	}
	if (idx == 0)
	{
		newNode->next = *h;
		(*h)->prev = newNode;
		*h = newNode;
		return (newNode);
	}
	dlistint_t *current = *h;
	unsigned int i = 0;

	while (current != NULL && i < idx)
	{
		current = current->next;
		i++;
	}
	if (current == NULL && i != idx)
	{
		free(newNode);
		return (NULL);
	}
	newNode->prev = current->prev;
	newNode->next = current;
	if (current->prev != NULL)
	{
		current->prev->next = newNode;
	}
	current->prev = newNode;
	return (newNode);
}
