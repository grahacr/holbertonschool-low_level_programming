#ifndef LISTS_H
#define LISTS_H
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
int _putchar(char c);
/**
 * list - singly linked list
 * @str: input string
 * @len: location of node
 * @next: pointer to next node
 */
typedef struct list
{
	char *str;
	size_t len;
	struct list *next;
} list_t;
size_t print_list(const list_t *h);
#endif
