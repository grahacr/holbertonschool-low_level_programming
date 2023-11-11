#include "lists.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
/**
 *
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
