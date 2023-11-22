#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 *
 *
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	int index = hash_djb2((const unsigned char *)key) % ht->size;
	hash_node_t *current = ht->array[index];

	while (current != NULL)
	{
		if (strcmp(current->key, key) == 0)
		{
			return (current->value);
			current = current->next;
		}
	}
	return (NULL);
}
