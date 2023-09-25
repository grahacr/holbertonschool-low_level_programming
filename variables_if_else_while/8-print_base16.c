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

	for (i = 0; i < 16; i++)
	{
		if (i < 10)
		{
			putchar('0' + 1);
		}
		else
		{
			putchar('a' + (i - 10));
		}
	}
}
	putchar('\n');
return (0);
