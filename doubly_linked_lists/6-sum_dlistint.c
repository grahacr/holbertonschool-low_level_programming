#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * sum_dlistint - sum data stored in doubly linked list
 * @head: pointer to head of list
 * Return: sum on success
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *ptr = head;

	while (ptr != NULL)
	{
		sum = sum + ptr->n;
		ptr = ptr->next;
	}
	return (sum);
}
