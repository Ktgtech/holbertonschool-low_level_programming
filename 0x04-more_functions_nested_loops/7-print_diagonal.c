#include "holberton.h"

/**
 * print_diagonal - check the code for Holberton School students.
 * @n: parameter
 */

void print_diagonal(int n)
{

	if (n <= 0)
	{
		putchar('\n');
	}

	else
	{
		while (n > 0)
		{
			putchar(92);
			putchar('\n');
			n--;
		}
	}


}
