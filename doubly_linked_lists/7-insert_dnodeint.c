#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *
 *
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));
	dlistint_t *ptr;
	unsigned int i;

	if (*h == NULL || new == NULL)
	{
		return (NULL);
	}
	new->n = n;

	if (idx == 0)
	{
		new->prev = NULL;
		new->next = *h;
	if (*h != NULL)
	{
		(*h)->prev = new;
	}
	*h = new;
	}
	ptr = *h;
	for (i = 0; i < idx - 1; i++)
	{
		ptr = ptr->next;
	}
	if (ptr == NULL)
	{
		free(new);
	}
	new->prev = ptr;
	new->next = ptr->next;
	if (ptr->next != NULL)
	{
		ptr->next->prev = new;
	}
	ptr->next = new;
}
