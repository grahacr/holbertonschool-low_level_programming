#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *
 *
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp = malloc(sizeof(dlistint_t));

	if (temp == NULL)
	{
		return (0);
	}
	temp->n = n;

	if (*head == NULL)
	{
		*head = temp;
	}
	else
	{
		dlistint_t *ptr = *head;

		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = temp;
	}
	return (temp);
}
