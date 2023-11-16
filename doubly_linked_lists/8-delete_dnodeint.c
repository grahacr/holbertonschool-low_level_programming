#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * delete_dnodeint_at_index - delete node in doubly linked list
 * @head: pointer to pointer to head of list
 * @index: position at which to delete
 * Return: 1 on success, -1 on failure.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *ptr = *head;
	unsigned int count = 0;

	while (ptr != NULL && count < index)
	{
		ptr = ptr->next;
		count++;
	}
	if (ptr == NULL)
	{
		return (-1);
	}
	if (ptr->prev != NULL)
		{
			ptr->prev->next = ptr->next;
		}
	else
	*head = ptr->next;
	if (ptr->next != NULL)
	{
		ptr->next->prev = ptr->prev;
	}
	free(ptr);
	return (1);
}
