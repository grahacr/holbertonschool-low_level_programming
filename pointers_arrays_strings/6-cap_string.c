#include "main.h"
/**
 * cap_string - capitalize characters in string
 * @str: string to capitalize characters
 * Return: str modified string
 *
 */
char *cap_string(char *str)
{
	int cap = 1;
	char *ptr = str;
	char sep[] = ".;,!\"(){} \n\t";

	while (*ptr)
	{
		int isSep = 0;
		int i;

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
			if (*ptr >= 'a' && *ptr <= 'z'_)
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
