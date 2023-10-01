#include "main.h"
/**
 * reset_to_98 - reset value pointed to
 * @n: random integer value to be changed
 * Return: 0 on success
 */
void reset_to_98(int *n)
{
	int n;
	int *p;

	n = 5;
	p = &n;
	*p = 98;
	return (0);
}
