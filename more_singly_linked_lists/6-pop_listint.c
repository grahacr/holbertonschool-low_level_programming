#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *
 *
 */
int pop_listint(listint_t **head)
{
	listint_t *temp = *head;
	size_t data = temp->n;

	if (*head == NULL || head == NULL)
	{
		return (0);
	}
	*head = temp->next;
	free(temp);
	return (data);
}
