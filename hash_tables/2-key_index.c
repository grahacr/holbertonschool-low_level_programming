#include "hash_tables.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *
 *
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2((unsigned char *)key, size));
}
