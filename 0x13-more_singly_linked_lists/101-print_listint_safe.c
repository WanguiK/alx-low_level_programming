#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint_safe - Prints a listint_t linked list.
 * @head: Pointer to the head of the list.
 *
 * Return: Number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *slow, *fast;
	size_t count = 0;

	slow = head;
	fast = head;

	while (fast != NULL && fast->next != NULL)
	{
		printf("[%p] %d\n", (void *)slow, slow->n);
		slow = slow->next;
		fast = fast->next->next;

		if (slow == fast)
		{
			printf("-> [%p] %d\n", (void *)slow, slow->n);
			break;
		}
		count++;
	}

	while (fast != NULL && fast->next != NULL)
	{
		slow = slow->next;
		fast = fast->next->next;
		count++;
	}

	while (head != slow)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		count++;
	}

	printf("[%p] %d\n", (void *)head, head->n);
	return (count + 1);
}
