#include "main.h"
/**
 *
 *
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;

	if (size == 0)
	{
		return (NULL);
	}

	char *array = (char *)malloc(size * sizeof(char));

	if (array == NULL)
	{
		return (NULL);
	}
	for (i; i < size, i++)
	{
		array[i] = c;
	}
	return (array);
	free(create_array);
}
