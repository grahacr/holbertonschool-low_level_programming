#ifndef LISTS_H
#define LISTS_H
#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include <stddef.h>
int _putchar(char c);
/**
 *
 *
 */
typedef struct list
{
	char *str;
	size_t len;
	struct list *next;
} listint_t;
size_t print_listint(const listint_t *h);
#endif
