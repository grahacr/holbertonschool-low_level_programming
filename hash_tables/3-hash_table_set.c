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
	int index = hash_djb2(key);
	hash_node_t *new = malloc(sizeof(hash_node_t));

	strcpy(new->key, key);
	new->value = strdup(value);
	new->next = NULL;

	if (ht[index] == NULL)
		ht[index] = new;
	else
	{
		hash_node_t *current = ht[index];
		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = new;
	}
	return (0);
}
