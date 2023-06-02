#include "lists.h"
#include <string.h>

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: first node
 * @str: string
 *
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	size_t len = 0;

	new_node = malloc(sizeof(list_t));
	if (!new_node)
	{
		return (NULL);
	}

	while (str[len])
	{
		len++;
	}
	new->len = len;

	new->str = strdup(str);
	if (!(*head))
	{
		new->next = NULL;
	}
	else
	{
		new->next = *head;
	}
	*head = new;

	return (*head);
}
