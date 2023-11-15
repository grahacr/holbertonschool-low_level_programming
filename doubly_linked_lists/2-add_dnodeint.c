#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *
 *
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *ptr = malloc(sizeof(dlistint_t));

	if (ptr == NULL)
	{
		return (0);
	}
	ptr->n = n;

	if (head->prev == NULL)
	{
		ptr->next = NULL;
		head->next = ptr;
	}
	else
	{
		ptr->next = *head;
		*head = ptr;
	}
	return (ptr);
}
