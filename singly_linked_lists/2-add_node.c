#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 *
 *
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *current = malloc(sizeof(list_t));

	while (current != NULL)
	{
		*head -> next = current;
		current = head;
	}
	return (current);
}

