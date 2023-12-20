#include "search_algos.h"
/**
 * linear_search - linear search through array
 * @size: size of array
 * @value: value searching for
 * Return: index of value on success, -1 on failure
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
