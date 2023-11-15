#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * print_dlistint - print doubly linked list contents
 * @h: pointer to the head of the list
 * Return: count of elements on success
 */
size_t print_dlistint(const dlistint_t *h)
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
		printf("%lu\n", ptr->n);
		ptr = ptr->next;
	}
	return (count);
}
