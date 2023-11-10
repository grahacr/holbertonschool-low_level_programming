#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
size_t print_list(const list_t *h)
{
	list_t *head;
	list_t *new;
	size_t n;

	head = malloc(sizeof(list_t));
	head = &hello;
	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		printf("Error\n");
		return (1);
	}
	new->data = strdup("Hello");
	new->len = 5;
	new->link = head;
	head = new;
	n = print_list(head);
	printf("-> %lu elements\n", n);
	free(new);
	return(0);
}
