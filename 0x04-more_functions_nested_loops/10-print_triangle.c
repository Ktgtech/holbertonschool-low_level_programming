#include "holberton.h"

/**
 * print_triangle - make a triangule.
 *
 * @size: parameter.
 */
void print_triangle(int size)
{
	int numl, esp, nume;

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
