#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_listint - free list
 * @head: pointer to head of list
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
