#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *ptr;

	ptr = head;
	while (ptr != NULL)
	{
		if (count == index)
		{
			return (ptr);
		}
		count++;
		ptr=ptr->next;
	}
	return (NULL);
}
