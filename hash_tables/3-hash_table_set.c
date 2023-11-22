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
	int index = hash_djb2((const unsigned char *)key) % ht->size;
	hash_node_t *new = malloc(sizeof(hash_node_t));

	new->key = strdup(key);
	if (new->key == NULL || new == NULL)
	{
		free(new);
		return (0);
	}
	new->value = strdup(value);
	if (new->value == NULL)
	{
		free(new->key);
		free(new);
		return (0);
	}
	new->next = NULL;
	if (ht->array[index] == NULL)
		ht->array[index] = new;
	else
	{
		hash_node_t *current = ht->array[index];
		while (current != NULL)
		{
			if (strcmp(current->key, key) == 0)
			{
				free(current->value);
				current->value = strdup(value);
				free(new->key);
				free(new->value);
				free(new);
				return(1);
			}
			if (current->next == NULL)
			{
				break;
			}
		current = current->next;
		}
		new->next = ht->array[index];
		ht->array[index] = new;
	}
	return (1);
}
