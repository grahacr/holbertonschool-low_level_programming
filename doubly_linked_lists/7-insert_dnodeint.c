#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * insert_dnodeint_at_index - insert new node at given index in doubly linked list
 * @h: pointer to pointer to head of list
 * @idx: index at which to insert node
 * @n: value in new node
 * Return: new node on success, NULL on error
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));
	dlistint_t *ptr;
	unsigned int i;

	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;

	if (idx == 0)
	{
		new->prev = NULL;
		new->next = *h;
	if (*h != NULL)
	{
		(*h)->prev = new;
	}
	*h = new;
	return (new);
	}
	ptr = *h;
	for (i = 0; i < idx - 1 && ptr != NULL; i++)
	{
		ptr = ptr->next;
	}
	if (ptr == NULL)
	{
		free(new);
		return (NULL);
	}
	new->prev = ptr;
	new->next = ptr->next;
	if (ptr->next != NULL)
	{
		ptr->next->prev = new;
	}
	ptr->next = new;
	return (new);
}
