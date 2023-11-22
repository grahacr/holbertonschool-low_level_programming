#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * hash_table_get - get value stored at key
 * @ht: hash table to search
 * @key: key to value
 * Return: value or NULL on failure
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
