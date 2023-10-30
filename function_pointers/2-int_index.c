#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * int_index - search array for integers 
 * @array: array to search
 * @size: size of array
 * @cmp: function to compare integers
 * Return: i on success, -1 on failure
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size < 0 || cmp == NULL || array == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
		return (-1);
}
