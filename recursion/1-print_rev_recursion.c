#include "main.h"
/**
 * _print_rev_recursion - print string in reverse using recursion
 * @s: string to print backwards
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	if (*s != ' ')
	{
		_putchar(*s);
	}
}
