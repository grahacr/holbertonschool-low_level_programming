#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
/**
 * list_len - return number of elements in linked list
 * @h: input string
 * Return: count on success
 */
size_t list_len(const list_t *h)
{
	const list_t *current = h;
	size_t count = 0;

	if (current != NULL)
	{
		current = current->next;
		count++;
	}
	return (count);
}
