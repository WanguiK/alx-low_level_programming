#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: pointer to a pointer to the first node
 * @str: string
 *
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	if (str == NULL)
	{
		return (NULL);
	}
	list_t *new_node = malloc(sizeof(list_t));

	if (new_node == NULL
		return (NULL);

	size_t len = 0;

	while (str[len])

		len++;

	new_node->len = len;
	new_node->str = strdup(str);
	if (new_node->str == NULL)
		free(new_node);
		return (NULL);
	new_node->next = *head;
	*head = new_node;
	return (*head);
}
