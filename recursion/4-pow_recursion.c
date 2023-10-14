#include "main.h"
/**
 * _pow_recursion - recursively find value of x raised to power of y
 * @x: base exponent
 * @y: exponent
 * Return: x * _pow_recursion
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	if (y > 0)
	{
		return (x * _pow_recursion(x, -y));
	}
	else if (y < 0)
	{
		return (-1);
	}
}
