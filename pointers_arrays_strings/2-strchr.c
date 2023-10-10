#include "main.h"
/**
 * _strchr - function to check for character in string
 * @s: string to check
 * @c: character to check for
 * Return: '\0' if not character
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (&(s[i]));
		}
		i++;
	}
	else
	{
		return ('\0');
	}
}
