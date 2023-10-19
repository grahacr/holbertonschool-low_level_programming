#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * create_array - create array of chars using malloc
 * @c: specific char to initialize array
 * @size: integer to create size of array
 * Return: pointer to the array on success or NULL on failure
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;

	if (size == 0)
	{
		return (NULL);
	}

	array = malloc(size * sizeof(char));

	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}
