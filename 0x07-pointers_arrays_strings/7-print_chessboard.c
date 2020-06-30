#include "holberton.h"
/**
 * print_chessboard - check the code for Holberton School students.
 * @a: punter.
 */
void print_chessboard(char (*a)[8])
{
	int i, d;

	for (i = 0; i < 8 ; i++)
	{
		for (d = 0; d < 8; d++)
		{
			_putchar(a[i][d]);
		}
		_putchar('\n');
	}
}
