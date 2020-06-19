#include "holberton.h"

/**
 * print_square - check the code for Holberton School students.
 * @size: parameter.
 */
void print_square(int size)
{
	int b = 0;

	do {
		int a = 0;

		while (a < size)
		{
			_putchar('#');
			a++;
		}

		_putchar('\n');
		b++;

	} while (b < size);

}
