#include "main.h"
/**
 * string_toupper -change lowercase to uppercase in string
 * @str: string of characters to change
 * Return: modified string
 */
char *string_toupper(char *str)
{
	char *ptr = str;

	while (*ptr != '\0')
	{
		if (*ptr >= 'a' && *ptr <= 'z')
		{
			*ptr = *ptr - 32;
		}
		ptr++;
	}
	return (str);
}
