#include "holberton.h"

/**
 * print_line - check the code for Holberton School students.
 * @n: parameter.
 */

void print_line(int n)
{

	if (n <= 0)
	{
		_putchar('\n');
	}

	else
	{
		while (n > 0)
		{
			_putchar('_');
			n--;
		}

		_putchar('\n');
	}
}
