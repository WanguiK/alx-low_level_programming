#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * pop_listint-  deletes the head node of a listint_t linked list
 * @head: pointer to the head of the list
 * Return:  the head node’s data (n) and if the linked list is empty  0
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n = 0;

	if (*head == NULL)
	{
		return (0);
	}
	else
	{
		temp = *head;
		n = temp->n;
		*head = (*head)->next;
		free(temp);
	}
	return (n);
}
