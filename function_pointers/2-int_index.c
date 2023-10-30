#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *
 *
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
		else
		{
			return (-1);
		}
	}
	return (0);
}
