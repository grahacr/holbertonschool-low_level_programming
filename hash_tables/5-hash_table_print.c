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

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
		{
			printf("%s\n", ht->array[i]->value);
		}
	}
}
