#include "main.h"
/**
 * cap_string - capitalize characters in string
 * @str: string to capitalize characters
 * Return: str modified string
 *
 */
char *cap_string(char *str)
{
	char *ptr = str;
	char sep[] = ".;,!\"(){} \n\t";

	while (*ptr)
	{
		int isSep = 0;
		int i;
		int cap = 1;

		for (i = 0; sep[i]; i++)
		{
			if (*ptr == sep[i])
			{
				isSep = 1;
				break;
			}
		}
		if (!isSep)
		{
			if (*ptr >= 'a' && *ptr <= 'z')
			{
				*ptr = *ptr - 32;
			}
		}
		else
		{
			cap = 1;
		}
		ptr++;
	}
	return (str);
}
