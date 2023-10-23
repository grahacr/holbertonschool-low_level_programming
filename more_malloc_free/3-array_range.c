#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * array_range - create pointer to array of integers
 * @min: minimum integer
 * @max: maximum integer
 * Return: range on success and NULL on failure
 */
int *array_range(int min, int max)
{
	int *range;
	int *current;

	if (min > max)
		return (NULL);
	range = malloc(((max - min) + 1) * sizeof(int));
	if (range == NULL)
		return (NULL);
	current = range;
	while (min <= max)
	{
		*current = min;
		current++;
		min++;
	}
	return (range);
}
