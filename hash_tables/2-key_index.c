#include "hash_tables.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * key_index - find index of a key
 * @key: key
 * @size: size of array of hash table
 * Return: index on success
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int value = hash_djb2(key);
	unsigned long int index = value % size;

	return (index);
}
