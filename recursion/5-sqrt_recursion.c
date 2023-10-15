#include "main.h"
/**
 * _calculate - calculate square root
 * @guess: integer to use in guessing
 * 
 * _sqrt_recursion - return square root of number
 * @n: integer to use
 * Return: _calculate
 */
int _calculate(int n, int guess)
{
	int next_guess = (guess + n / guess) / 2;

	if (next_guess == guess)
	{
		return (guess);
	}
	else
	{
		return (_calculate(n, next_guess));
	}
}
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (n);
	}
	return (_calculate(n, n / 2));
}
