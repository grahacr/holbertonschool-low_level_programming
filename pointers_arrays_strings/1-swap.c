#include "main.h"
/**
 * swap_int - swap value of two integers
 * @a: integer pointer
 * @b: another integer pointer
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
