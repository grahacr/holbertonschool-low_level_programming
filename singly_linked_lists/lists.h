#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#ifndef LISTS_H
#define LISTS_H
int _putchar(char c);
typedef struct list
{
	char *str;
	size_t len;
	struct list *next;
} list_t;
size_t print_list(const list_t *h);
#endif
