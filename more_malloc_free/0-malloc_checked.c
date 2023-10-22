#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - allocate memory in space and check for failure
 * @b: variable to store
 * Return: allocated_memory on success, 98 on failure
 */
void *malloc_checked(unsigned int b)
{
	void *allocated_memory = malloc(b);

	if (allocated_memory == NULL)
	{
		exit(98);
	}
	return (allocated_memory);
}
