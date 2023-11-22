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
	int flag = 0;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
		{
			if (flag)
			{
				printf(", ");
			}
			printf("'%s': '%s'", ht->array[i]->key, ht->array[i]->value);
			flag = 1;
		}
	}
	printf("}\n");
}
