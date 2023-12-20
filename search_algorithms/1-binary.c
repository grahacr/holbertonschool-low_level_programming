#include "search_algos.h"
/**
 * binary_search - binary search through sorted array
 * @array: array to search in
 * @size: size of array
 * @value: value searching for
 * Return: index of value on success, -1 on failure
 */
int binary_search(int *array, size_t size, int value)
{
	int low = 0;
	int high = size;
	int mid = low + (high - low) / 2;
	int i;

	if (array == NULL)
		return (-1);
	while (low <= high)
	{
		printf("Searching in array: ");
		for (i = low; i <= high; i++)
		{
			printf("%d", array[i]);
			if (i < high)
				printf(", ");
		}
		printf("\n");
		if (array[mid] == value)
			return (mid);
		if (array[mid] < value)
			low = mid + 1;
		else
			high = mid - 1;
	}
	return (-1);
}
