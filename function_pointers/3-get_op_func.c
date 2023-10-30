#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * get_op_func - select correct function to perform operation
 * @s: operator passed as argument to program
 * 
 */
int (*get_op_func(char *s))(int, int)
{
	int i = 0;

	while (ops[i].op != NULL)
	{
		if (strcmp(s,ops[i].op) == 0)
		{
			return (ops[i].f);
		}
		i++;
	}
	return (NULL);
}
