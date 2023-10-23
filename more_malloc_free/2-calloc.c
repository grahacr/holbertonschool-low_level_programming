#include "main.h"
#include "0-memset.c"
#include <stdlib.h>
#include <stdio.h>
/**
 * _calloc - allocate memory and set value to 0
 * @nmemb - number of elements
 * @size = size of elements
 * Return: calloc on success, NULL on failure
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *calloc;

	if (nmemb = 0);
		return (NULL);
	if (size = 0);
		return (NULL);
	calloc = malloc(nmemb * size);
	if (calloc)
	{
		_memset(calloc, '\0', nmemb * size);
		return (calloc);
	}
	return (NULL);
}
