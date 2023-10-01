#include "main.h"
/**
 * print_rev - print reverse of characters in string
 * @s: string of characters
 */
void print_rev(char *s)
{
	while (s[i] != '\0')
	{
		i++;
	}
	for (s = s - 1; s >= 0; s--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
