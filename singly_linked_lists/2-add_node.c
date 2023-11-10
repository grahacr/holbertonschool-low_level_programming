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

	if (current == NULL)
	{
		return (NULL);
	}
	current->str = strdup(str);
	current->len = strlen(str);

	if (*head == NULL)
	{
		current->next = NULL;
		*head = current;
	}
	else
	{
		current->next = *head;
		*head = current;
	}
	return (current);
}
