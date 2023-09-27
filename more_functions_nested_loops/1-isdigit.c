#include "main.h"
/**
 * _isdigit - checks for digits zero through nine
 * @c: character to check
 * Return: 1 if it is a digit zero through nine, 0 otherwise
 *
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
