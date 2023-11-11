#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp = (listint_t *)malloc(sizeof(listint_t));

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
		listint_t *current = *head;
	
		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = temp;
	}
	return (temp);
}
