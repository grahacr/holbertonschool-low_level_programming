#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
/**
 * array_iterator - iterate through array to perform function on elements
 * @array: array to iterate through
 * @size: size of array
 * @action: pointer to function used on elements in array
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (action == NULL && array == NULL)
	{
		return;
	}
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
