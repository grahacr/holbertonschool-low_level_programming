#include "hash_tables.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *
 *
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int i;
	unsigned long int value = hash_djb2(key);

	for (i = 0; i < size; i++)
	{
		if (i == value)
			return (i);
	}
	return(value);
}
