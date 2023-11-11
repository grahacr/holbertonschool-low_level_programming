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
	list_t *ptr; *temp;
	ptr = head;
	temp = (list_t*)malloc(sizeof(list_t));
	temp->str = str;
	temp->next = NULL;
	if (ptr == NULL)
	{
		return (NULL);
	}
	else if (ptr->next != NULL)
	{
		ptr = ptr->next;
	}
	ptr->next = temp;
}
