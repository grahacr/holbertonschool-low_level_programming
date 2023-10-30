#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * op_add - add integers
 * @a: first integer
 * @b: second integer
 * Return: sum of integers
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - subtract integers
 * @a: first integer
 * @b: second integer
 * Return: result of integers
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multiply integers
 * @a: first integer
 * @b: second integer
 * Return: product of integers
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - divide integers
 * @a: first integer
 * @b: second integer
 * Return: result of divided integers
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);

}
/**
 * op_mod - modulo integers
 * @a: first integer
 * @b: second integer
 * Return: result of integers
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
