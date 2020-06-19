#include "holberton.h"

/**
 * print_square - check the code for Holberton School students.
 * @size: parameter.
 */
void print_square(int size)
{
	int b = 0;
	int a;

	for (; b < size; b++)
	{
		for (a = 0; a < size; a++)
		{
			putchar('#');
		}

		putchar('\n');
	}

}
