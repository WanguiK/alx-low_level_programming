#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * insert_nodeint_at_index- inserts a new node at a given position
 * @idx: is the index of the list where the new node should be added
 * @head: pointer to the head of the list
 * @n: data to be filled in new node
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *temp, *previous;
	unsigned int i = 0;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;

	if (*head == NULL && idx == 0)
	{
		new_node->next = NULL;
		new_node = *head;
		return (new_node);
	}
	if (*head != NULL && idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	temp = *head;
	previous = NULL;

	while (i < idx)
	{
		previous = temp;
		temp = temp->next;

		if (temp == NULL)
		{
			free(new_node);
			return (NULL);
		}
		i++;
	}
	new_node->next = temp;
	previous->next = new_node;
	return (new_node);
}
