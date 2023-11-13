#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
int sum_listint(listint_t *head)
{
	int sum;
	listint_t *ptr;

	if (ptr == NULL)
	{
		return (0);
	}
	else
	{
		ptr = head;
		sum += ptr->n;
		ptr = ptr->next;
	}
	return (sum);
}

