#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * add_nodeint_end - add node at end of list
 * @head: pointer to pointer to head of list
 * @n: integer input
 * Return: address of new node on success
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp = (listint_t *)malloc(sizeof(listint_t));

	if (temp == NULL)
	{
		return (0);
	}
	temp->n = n;
	if (*head == NULL)
	{
		*head = temp;
	}
	else
	{
		listint_t *current = *head;

		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = temp;
	}
	return (temp);
}
