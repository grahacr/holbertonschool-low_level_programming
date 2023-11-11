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
	size_t count = 0;
	const listint_t *ptr = h;

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
