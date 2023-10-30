#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *
 *
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL)
	{
		f(name);
	}
	_putchar (name);
}
