#include "holberton.h"

/**
 * more_numbers - print the numbers from 0 to 14.
 */

void more_numbers(void)
{
	int n;

	while (n <= 10)
	{
		for (n = 0; n <= 14; n++)
		{
			if (n > 9)
			{
				_putchar(n / 10 + '0');
			}

			_putchar(n % 10 + '0');
			_putchar('\n');
	}
		n++;
}
