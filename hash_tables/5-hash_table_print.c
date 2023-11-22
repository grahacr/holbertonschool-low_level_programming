#include "hash_tables.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 *
 *
 */
void hash_table_print(const hash_table_t *ht)
{
	long unsigned int i;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
		{
			printf("'%s': '%s', ", ht->array[i]->key, ht->array[i]->value);
			if (i < ht->size - 1 && ht->array[i + 1])
			{
				printf(", ");
			}
		}
	}
	printf("}\n");
}
