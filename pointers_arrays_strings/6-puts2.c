#include "main.h"
/**
 * puts2 - print every other character in character string
 * @str: string of characters
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	if (str[i] % 2 != 1)
	{
		_putchar(str[i]);
	}
	else
	{
		_putchar('\n');
	}
}
