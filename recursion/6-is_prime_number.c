#include "main.h"
/**
 * is_prime_recursive - finds prime recursively
 * @n: integer to use
 * @divisor: integer to divide with to find prime
 * Return: is_prime_recursive to determine primality
 */
int is_prime_recursive(int n, int divisor)
{
	if (n <= 1)
	{
		return (0);
	}
	if (divisor == 1)
	{
		return (1);
	}
	if (n % divisor == 0)
	{
		return (0);
	}
	return (is_prime_recursive(n, divisor - 1));
}
/**
 * is_prime_number - return prime number and keep going recursively
 * @n: integer
 * Return: is_prime_recursive
 */
int is_prime_number(int n)
{
	return (is_prime_recursive(n, n - 1));
}
