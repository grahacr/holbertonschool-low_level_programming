#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_name - print name in character array
 * @name: name input
 * @f: function pointer to character array
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
