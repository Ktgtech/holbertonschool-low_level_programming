#include "holberton.h"

/**
 * print_diagonal - check the code for Holberton School students.
 * @n: parameter
 */

void print_diagonal(int n)
{

	int b, e;

	b = 0;

	if (n <= 0)
	{
		putchar('\n');
	}

	else
	{
		while (b < n)
		{
			e = 0;

			while (e < b)
			{
				putchar(' ');
				e++;
			}


			_putchar(92);
			_putchar('\n');
			b++;
		}
	}


}
