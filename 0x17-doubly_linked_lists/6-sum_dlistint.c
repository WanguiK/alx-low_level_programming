#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * sum_dlistint-  returns the sum of all the data (n)
 * @head: head pointer of the double linked list
 * Return: sum of all the data and NULL if list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *current = head;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
