#include "main.h"
/**
 * print_chessboard - print chessboard using double array
 * @a: double array
 */
void print_chessboard(char (*a)[8])
{
	int row = 0;
	int col = 0;

	for (row = 0; row < 8; row++)
	{
		_putchar(a[row][col]);
		_putchar(' ');
	}
	_putchar('\n');
}
