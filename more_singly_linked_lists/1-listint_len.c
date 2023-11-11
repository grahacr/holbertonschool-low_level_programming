#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * listint_len - return number of elements in linked list
 * @h: element in list
 * Return: count on success
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *ptr = h;
	size_t count = 0;

	while (current != NULL)
	{
		count++;
		current = current->next;
	}
	return (count);
}
