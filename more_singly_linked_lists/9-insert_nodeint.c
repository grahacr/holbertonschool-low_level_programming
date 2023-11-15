#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/*
 *
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr = malloc(sizeof(listint_t));
	listint_t *current;
	unsigned int i;

	if (head == NULL || ptr == NULL)
	{
		return (NULL);
	}
	ptr->n = n;
	ptr->next = NULL;

	if (idx == 0)
	{
		ptr->next = *head;
		*head = ptr;
		return (ptr);
	}
	current = *head;

	for (i = 0; i < idx - 1; i++)
	{
		if (current == NULL)
		{
			free(ptr);
			return (NULL);
		}
		current = current->next;
	}
	if (current == NULL)
	{
		free(ptr);
		return (NULL);
	}
	ptr->next = current->next;
	current->next = ptr;
	return (ptr);
}
