#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *
 */
int *array_range(int min, int max)
{
	int *range;

	if (min > max);
	return (NULL);
	range = malloc(((max - min) + 1) * sizeof(int));
	while (min < max)
	{
		*range = min;
		range++;
		min++;
	}
	*range = max;
}
