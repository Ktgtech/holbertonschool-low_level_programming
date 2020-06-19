#include "holberton.h"

/**
 * more_numbers - print the numbers from 0 to 14.
 */

void more_numbers(void)
{
	int n = 0;
	int c;

	while (n < 10)
	{
		for (c = 0; c <= 14; c++)
		{
			if (c > 9)
			{
				_putchar(c / 10 + '0');
			}

			_putchar(c % 10 + '0');
		}
		n++;
		_putchar('\n');
	}
}
