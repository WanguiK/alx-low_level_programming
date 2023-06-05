#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * add_nodeint- adds a new node at the beginning of a listint_t list
 * @n: value assigned to new node
 * @head: first node
 *
 * Return:  address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = (listint_t *)malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}
	else
	{
		new_node->n = n;
		new_node->next = *head;
		*head = new_node;
	}
	return (new_node);
}
