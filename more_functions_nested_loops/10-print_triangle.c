#include "main.h"
/**
 * print_triangle - print triangle shape using #
 * @size: size of triangle
 * Return: 0 on success
 */
void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i, j;

		for (i = 1; i <= size; i++)
		{
			for (j = 1; j <= size; j++)
			{
				_putchar(' ');
			}
			for (j = 1; j <= i; j++)
			{
			_putchar(35);
			}
			_putchar('\n');
		}
	}
}
