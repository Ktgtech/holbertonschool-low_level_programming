#include "holberton.h"

/**
 * print_diagonal - check the code for Holberton School students.
 * @n: parameter
 */

void print_diagonal(int n)
{


	if (n <= 0)
	{
		_putchar('\n');
	}

	else
	{
		int b, e;

		b = 0;

		while (b < n)
		{
			e = 0;

			while (e < b)
			{
				_putchar(' ');
				e++;
			}


			_putchar(92);
			_putchar('\n');
			b++;
		}
	}


}
