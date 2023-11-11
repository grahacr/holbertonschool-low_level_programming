#include "lists.h"
#include <stdio.h>
#include <strings.h>
#include <stdlib.h>
/**
 *
 *
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp = (list_t*)malloc(sizeof(list_t));
	if (temp == NULL)
	{
		return (NULL);
	}
	temp->str = strdup(str);
	temp->len = strlen(str);
	temp->next = NULL;
	if (*head == NULL)
	{
		*head = temp;
	}
	else
	{
		list_t *current = head;
		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = temp;
	}
	return (temp);		
}
