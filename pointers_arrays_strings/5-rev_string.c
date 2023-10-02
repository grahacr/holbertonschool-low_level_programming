#include "main.h"
/**
 * rev_string - reverse string
 * @s: pointer to string of characters
 *
 */
void rev_string(char *s)
{
	int length = 0;

	while (s[length] != '0')
	{
		length++;
	}
	int start = 0;
	int end = length - 1;

	while (start < end)
	{
		char temp = s[start];

		s[start] = s[end];
		s[end] = temp;
		start++;
		end--;
	}
}
