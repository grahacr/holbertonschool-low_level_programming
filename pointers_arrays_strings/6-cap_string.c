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
	int inWord = 0;

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
			inWord = 0;
		}
		if (!inWord && *str >= 'a' && *str <= 'z')
		{
			*str = *str - 32;
		}
		inWord = 1;
	}
	str++;
	return (str);
}
