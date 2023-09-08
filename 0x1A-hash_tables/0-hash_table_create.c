#include <stdio.h>
#include <stdlib.h>
#include "hash_tables.h"

/**
 * hash_table_create- creates a hash table
 * @size: is the size of the array
 * Return:  a pointer to the newly created hash table or NULL
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table;

	new_table = (hash_table_t *)malloc(sizeof(hash_table_t));
	if (new_table == NULL)
	{
		return (NULL);
	}
	new_table->size = size;
	return (new_table);
}
