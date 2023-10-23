#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *
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
		*current= min;
		current++;
		min++;
	}
	return (range);
}
