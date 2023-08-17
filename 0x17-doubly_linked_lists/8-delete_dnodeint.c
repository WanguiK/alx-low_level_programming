#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index
 * @head: head pointer of linked lists
 * @index: the index of the node that should be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current, *temp;
	unsigned int i;

	if (*head == NULL)
	{
		return (-1);
	}
	current = *head;
	if (index == 0)
	{
		*head = current->next;
		if (*head != NULL)
		{
			(*head)->prev = NULL;
		}
		free(current);
		return (1);
	}
	for (i = 0; current != NULL && i < index - 1; i++)
	{
		current = current->next;
	}
	if (current == NULL || current->next == NULL)
	{
		return (-1);
	}
	temp = current->next->next;
	free(current->next);
	current->next = temp;

	if (current->next != NULL)
	{
		current->next->prev = current;
	}
	return (1);
}
