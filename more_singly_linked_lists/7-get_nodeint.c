#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * got_nodeint_at_index - print desired index
 * @head: head of singly linked list for traversing
 * @index: desired index
 * Return: index on success, null on failure
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	size_t count = 0;
	listint_t *ptr;

	if (head == NULL || index < 1)
	{
		return (NULL);
	}
	else
	{
		ptr = head;
		while (ptr != NULL)
		{
			if (count == index)
			{
				return (ptr);
			}
			count++;
			ptr = ptr->next;
		}
		return (NULL);
	}
}
