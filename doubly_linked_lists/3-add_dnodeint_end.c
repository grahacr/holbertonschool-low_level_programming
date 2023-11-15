#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * add_dnodeint_end - add node at end of doubly linked list
 * @head: pointer to pointer to head of list
 * @n: data for node
 * Return: temp on success, 0 on failure
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp = malloc(sizeof(dlistint_t));

	if (temp == NULL)
	{
		return (0);
	}
	temp->n = n;
	temp->next = NULL;

	if (*head == NULL)
	{
		*head = temp;
		temp->prev = NULL;
	}
	else
	{
		dlistint_t *ptr = *head;

		while (ptr->next != NULL)
		{
			ptr = ptr->next;
		}
		ptr->next = temp;
		temp->prev = ptr;
	}
	return (temp);
}
