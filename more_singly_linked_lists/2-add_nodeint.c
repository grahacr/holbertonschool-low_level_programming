#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * add_nodeint - add node to singly linked list
 * @head: pointer to pointer to head of list
 * @n: integer input
 * Return: address of new node on success
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr = malloc(sizeof(listint_t));

	if (ptr == NULL)
	{
		return (0);
	}
	ptr->n = n;

	if (*head == NULL)
	{
		ptr->next = NULL;
		*head = ptr;
	}
	else
	{
		ptr->next = *head;
		*head = ptr;
	}
	return (ptr);
}
