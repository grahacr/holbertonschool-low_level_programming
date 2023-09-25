#include <stdio.h>
/**
 * main - entry point
 *
 * specifies return point
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i != 9; i++)
	{
		putchar('0', i);
		putchar(',');
		putchar(' ');
	}
	{
		if (i == '9')
		{
			putchar('0' + i);
		}
	}
return (0);
}
