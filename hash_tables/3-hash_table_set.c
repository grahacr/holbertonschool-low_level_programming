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
	unsigned long int index = 0;
	char *holdvalue = NULL;
	hash_node_t *current = NULL;
	hash_node_t *new = NULL;

	if (ht == NULL || ht->array == NULL || value == NULL)
		return (0);
	if (strlen(key) == 0 || key == NULL)
		return (0);
	holdvalue = strdup(value);
	if (holdvalue == NULL)
		return (0);
	index = hash_djb2((const unsigned char *)key);
	current = ht->array[index];
	while (current)
	{
		if (strcmp(current->key, key) == 0)
		{
			free(current->value);
			current->value = holdvalue;
			current->value = strdup(value);
			free(holdvalue);
			return (1);
		}
		current = current->next;
	}
	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
	{
		free(new);
		return (0);
	}
	new->key = strdup(key);
	new->value = holdvalue;
	new->next = ht->array[index];
	ht->array[index] = new;
	return (1);
}
