#include "main.h"
/**
 * _isalpha - check for alphabetic characters
 * @c: the character to check
 *
 * Return: 1 if c is a letter, 0 otherwise
 */
int _isalpha(int c)
{
	if (c >= 'a', c >= 'A', c <= 'z', c <= 'Z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (0);
	}
}
