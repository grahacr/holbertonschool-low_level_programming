#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * hash_table_set - add element to hash table
 * @ht: hash table to add value or update value to
 * @key: key. cannot be empty
 * @value: associated with key. must be duplicated. 
 * Return: 1 on success, 0 on failure
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new = malloc(sizeof(hash_node_t));
	char *valuecp;
	unsigned long int index, i;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);
	valuecp = strdup(value);
	if (valuecp == NULL)
		return (0);
	index = hash_djb2((const unsigned char*)key, ht->size);
	for (i = index; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = valuecp;
			return (1);
		}
	}
	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
	{
		free(valuecp);
		return (0);
	}
	new->key = strdup(key);
	if (new->key == NULL)
	{
		free(new);
		return (0);
	}
	new->value = valuecp;
	new->next = ht->array[index];
	ht->array[index] = new;
	return (1);
}
