#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
/**
 *
 *
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *current = h;
	size_t count;

	if (h == NULL)
	{
		return (NULL);
	}
	listint_t *ptr = NULL;
	ptr = h;
	while (ptr != NULL)
	{
		count++;
		printf("%d ", ptr->data);
		ptr = ptr->next;
	}
	return (count);
}
