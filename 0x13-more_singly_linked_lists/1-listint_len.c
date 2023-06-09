#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * listint_len-  returns the number of elements in a linked listint_t list
 * @h: singly linked list to print
 *
 * Return: the number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
