#include "main.h"
/**
 * _sqrt_recursion - return square root of number
 * _calculate - calculate the natural square root of a number through guessing
 * @n: integer to use
 * @guess: integer to use in guessing
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
