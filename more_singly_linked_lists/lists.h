#ifndef LISTS_H
#define LISTS_H
#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include <stddef.h>
int _putchar(char c);
/**
 * struct list - singly linked list
 * @n: integer input
 * @next: pointer to next node
 */
typedef struct list
{
	size_t n;
	struct list *next;
} listint_t;
size_t print_listint(const listint_t *h);
#endif
