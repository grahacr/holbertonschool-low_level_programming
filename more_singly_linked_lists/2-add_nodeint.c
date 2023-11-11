#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	list_t *ptr = malloc(sizeof(listint_t));

	if (ptr == NULL)
	{
		return (0);
	}
	ptr->n = n;

	if (*head == NULL)
	{
		ptr->next = NULL;
		*head = ptr;
	}
	else
	{
		ptr->next = *head;
		*head = ptr;
	}
	return (ptr);
}
