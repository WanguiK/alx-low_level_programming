#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * sum_listint - returns the sum of all the data in a listint_t list
 * @head: pointer to the head of the list
 *
 * Return: sum, if the list is empty, return 0
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
