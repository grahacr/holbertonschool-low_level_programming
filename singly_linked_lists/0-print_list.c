#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
size_t print_list(const list_t *h)
{
	const list_t *current = h;
	size_t count = 0;

	while (current != NULL)
	{
		if (current->str != NULL)
		{
			printf("[%lu] %s\n", current->len, current->str);
			current = current->next;
			count++;
		}
		else
		{
			printf("[%lu] (nil)\n", current->len);
		}
	}
	return(count);
}
