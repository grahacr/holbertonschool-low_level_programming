#include "main.h"
/**
 * cap_string: capitalize characters in string
 * @str: string to capitalize characters
 * Return: str modified string
 *
 */
char *cap_string(char *str)
{
	int capitalize = 1;
	char *ptr = str;

	while (*ptr != '\0')
	{
		if (*ptr == ' ' || *ptr == '\t' || *ptr == '\n' || *ptr == ',' || *ptr == ';' || *ptr == '.' || *ptr == '!' || *ptr == '?' || *ptr == '"' || *ptr == '(' || *ptr == ')' || *ptr == '{' || *ptr == '}')
		{
			capitalize = 1;
		}
		else if ((*ptr >= 'a' && *ptr <= 'z') || (*ptr >= 'A' && *ptr <= 'Z'))
		{
			if (capitalize)
			{
				*ptr = (*ptr >= 'a' && *ptr <= 'z') ? *ptr - 32 : *ptr;
				capitalize = 0;
			}
		}
		return (str);
	}
}
