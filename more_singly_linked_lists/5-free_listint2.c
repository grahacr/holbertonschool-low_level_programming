#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *
 */
void free_listint2(listint_t **head)
{
	if (head == NULL || *head == NULL)
	{
		return;
	}
	listint_t *temp;

	while (*head != NULL)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}
	*head = NULL;
}
