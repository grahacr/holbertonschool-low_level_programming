#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 *
 *
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	int index = hash_djb2((const unsigned char *)key) % ht->size;
	hash_node_t *new = malloc(sizeof(hash_node_t));

	if (new == NULL)
	{
		return (-1);
	}
	new->key = strdup(key);
	if (new->key == NULL)
	{
		free(new);
		return (-1);
	}
	new->value = strdup(value);
	if (new->value == NULL)
	{
		free(new->key);
		free(new);
		return (-1);
	}
	new->next = NULL;

	if (ht[index].array[index] == NULL)
		ht[index].array[index] = new;
	else
	{
		hash_node_t *current = ht->array[index];
		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = new;
	}
	return (0);
}
