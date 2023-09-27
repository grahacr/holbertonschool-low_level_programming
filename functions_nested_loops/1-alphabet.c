#include "main.h"
/**
 * main - return point
 * Return: 0 success
 */
int main(void)
{
	print_alphabet();
	return (0);
}
/**
 * print_alphabet - print alphabet prototype
 * Return: 0 success
 */
void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
}
