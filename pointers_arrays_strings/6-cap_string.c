#include "main.h"
/**
 * cap_string - capitalize characters in string
 * @str: string to capitalize characters
 * Return: ptr modified string
 *
 */
char *cap_string(char *str)
{
	char sep[13] = {'"', ' ', '{', '}', '.', ';', ',', '!', '(', ')', '\n', '\t'};
	int isSep = 1;
	int i;
	char *ptr = str;

	while (*str)
	{
		for (i = 0; sep[i]; i++)
		{
			if (*str == sep[i])
			{
				isSep = 1;
				break;
			}
		}
		if (isSep == 1)
		{
			if (*str >= 'a' && *str <= 'z')
			{
				*str = *str - 32;
				isSep = 0;
			}
		}
		str++;
	}
	return (ptr);
}
