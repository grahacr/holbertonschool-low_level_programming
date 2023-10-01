#include "main.h"
/**
 *
 */
void print_rev(char *s)
{
	int i;
	
	while(s[i] != '\0')
	{
		i++;
	}
	for (i = s - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
