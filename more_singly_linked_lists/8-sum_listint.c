#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
int sum_listint(listint_t *head)
{
	int sum;
	ptr = head;

	if (ptr == NULL)
	{
		return (0);
	}
	else
	{
		sum += ptr->n;
		ptr = ptr->next;
	}
	return (sum);
}

