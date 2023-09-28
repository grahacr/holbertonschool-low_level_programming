#include "main.h"
/**
 * more_numbers - print most numbers except two and four
 * Return: void on success
 */
void more_numbers(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		if (num != 2 && num != 4)
			_putchar(num);
	}
	_putchar('\n');
}
