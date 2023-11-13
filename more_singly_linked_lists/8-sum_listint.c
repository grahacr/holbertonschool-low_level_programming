#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * sum_listint - sum integer data in singly linked list
 * @head: head of list to use to traverse
 * Return: sum of integer data on success, 0 if empty
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *ptr = head;

	while (ptr != NULL)
	{
		sum = sum + ptr->n;
		ptr = ptr->next;
	}
	return (sum);
}
