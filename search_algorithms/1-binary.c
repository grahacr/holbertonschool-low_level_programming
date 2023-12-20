#include "search_algos.h"
/**
 * binary_search - binary search through sorted array
 * @array: array to search in
 * @size: size of array
 * @value: value searching for
 * Return: 
 */
int binary_search(int *array, size_t size, int value)
{
	size_t low = 0;
	size_t high = size - 1;
	size_t mid = low + (high - low) / 2;
	size_t i;

	if (array == NULL)
		return (-1);
	while (low <= high)
	{
		printf("Searching in array: ");
		for (i = low; i <= high; i++)
		{
			printf("%ld", array[i]);
		}
		printf("\n");
		if (array[mid] == value)
			return(mid);
		if (array[mid] < value)
			low = mid + 1;
		else
			high = mid - 1;
	}
	return (-1);
}
