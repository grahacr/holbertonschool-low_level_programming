#include "search_algos.h"
/**
 *
 */
int binary_search(int *array, size_t size, int value)
{
	size_t low = 0;
	size_t high = size - 1;
	size_t mid = (high - low) / 2;

	while (low <= high)
	{
		if (array[mid] == value)
			return(mid);
		if (array[mid] < value)
			low = mid + 1;
		else
			high = mid - 1;
	}
}
