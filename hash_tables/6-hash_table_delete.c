#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *
 *
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *ptr, *temp;

	if (ht == NULL)
		return;
	for (i = 0, i < ht->size; i++)
	{
		ptr = ht->array[i];
		while (ptr != NULL)
		{
			temp = ptr->next;
			free(ptr->key);
			free(ptr->value);
			free(ptr);
			ptr = temp;
		}
	}
	free(ht->array);
	free(ht);
}
