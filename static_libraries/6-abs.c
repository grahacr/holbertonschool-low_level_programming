#include "main.h"
/**
 * _abs - computes absolute value of an integer
 * @num: integer
 * Return: -num if number is negativ e, num otherwise
 *
 */
int _abs(int num)
{
	if (num < 0)
	{
		return (-num);
	}
	else
	{
		return (num);
	}
}
