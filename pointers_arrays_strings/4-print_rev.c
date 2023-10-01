#include "main.h"
/**
 *
 */
void print_rev(char *s)
{
	int i;
	int length = 0;
	
	while(str[length] != '\0')
	{
		length++
	}
	for (i = length - 1; i >= 0; i--)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
