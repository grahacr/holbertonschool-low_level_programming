#include "hash_tables.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * hash_table_create - create hash table
 * @size: size of table
 * Return: hash table on success, NULL on failure
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht = malloc(sizeof(hash_table_t));

	if (ht == NULL)
	{
		return (NULL);
	}
	ht->array = malloc(size * sizeof(hash_table_t *));
	if (ht->array == NULL)
	{
		free(ht);
		return (NULL);
	}
	ht->size = size;
	return (ht);
}
