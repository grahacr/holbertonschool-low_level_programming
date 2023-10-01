#include "main.h"
/**
 * reset_to_98 - reset value pointed to
 * @n: random integer value to be changed
 */
void reset_to_98(int *n)
{
	int n;
	int *p;

	n = 402;
	p = &n;
	*p = 98;
}
