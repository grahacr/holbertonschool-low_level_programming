#include "hash_tables.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *
 *
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash = hash_djb2((const unsigned char *)key);
	int j;

	while (hash != NULL)
	{
		for (j = 0; j < size, j++)
		{
			if (strcmp(hash[j]->key, key) == 0)
			{
				return hash[h]->index;
			}
		}
	}
}		
