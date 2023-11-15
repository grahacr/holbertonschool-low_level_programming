#include "lists.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * dlistint_len - return number of elements in doubly linked list
 * @h: pointer to head of list
 * Return: count of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;
	const dlistint_t *ptr = h;

	if (h == NULL)
	{
		return (0);
	}
	while (ptr != NULL)
	{
		count++;
		ptr = ptr->next;
	}
	return (count);
}
