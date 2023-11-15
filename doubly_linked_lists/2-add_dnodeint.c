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
	ptr->prev = NULL;
	ptr->next = *head;

	if (*head != NULL)
	{
		(*head)->prev = ptr;
	}
	*head = ptr;
	return (ptr);
}
