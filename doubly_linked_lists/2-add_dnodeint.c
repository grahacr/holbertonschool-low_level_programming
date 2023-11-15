#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * add_dnodeint - add node at beginning of doubly linked list
 * @head - pointer to pointer to head of list
 * @n: value to store
 * Return: ptr on success, 0 on failure
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *ptr = malloc(sizeof(dlistint_t));

	if (ptr == NULL)
	{
		return (0);
	}
	ptr->n = n;
	ptr->prev = NULL;
	ptr->next = *head;

	if (*head != NULL)
	{
		(*head)->prev = ptr;
	}
	*head = ptr;
	return (ptr);
}
