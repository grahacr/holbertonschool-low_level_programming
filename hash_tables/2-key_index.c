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
	int c;

	while (hash)
	{
		for (i = 0; i < size; i++)
		{
			if (key == hash_node_t->key)
			{
				return (hash_node_t->value);
			}
		}
	}
}
