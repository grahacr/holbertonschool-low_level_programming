#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * pop_listint - delete head of list after getting its data
 * @head: pointer to pointer to head of list
 * Return: data from deleted head on success
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	size_t data;

	if (*head == NULL || head == NULL)
	{
		return (0);
	}
	else
	{
		*temp = *head;
		data = temp->n;
		*head = (*head)->next;
		free(temp);
		return (data);
	}
}
