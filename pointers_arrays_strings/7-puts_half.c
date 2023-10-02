#include "main.h"
/**
 * puts_half - print half of char string
 * @str: string of characters
 */
void puts_half(char *str)
{
	int length = 0;
	int start;

	while (str[length] != '\0')
	{
		length++;
	}
	start = length / 2;
	while (str[start] != '0')
	{
		_putchar(str[start]);
		start++;
	}
	_putchar('\n');
}
