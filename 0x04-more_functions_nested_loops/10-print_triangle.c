#include "holberton.h"

/**
 * print_triangle - make a triangule.
 *
 * @size: parameter.
 */
void print_triangle(int size)
{
	int numl, esp, nume;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		numl = 1;

		while (numl <= size)
		{
			esp = 1;

			while (esp <= (size - numl))

			{
				_putchar(' ');
				esp++;
			}

			nume = 1;

			while (nume <= numl)
			{
				_putchar('#');
				nume++;
			}

			numl++;
			_putchar('\n');
		}
	}
}
