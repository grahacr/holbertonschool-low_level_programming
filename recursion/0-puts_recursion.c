#include "main.h"
/**
 * _puts_recursion - returns a string using recursion
 * @s: string to go through
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
