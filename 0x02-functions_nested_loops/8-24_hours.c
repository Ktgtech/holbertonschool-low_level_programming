B#include "holberton.h"

/**
 * jack_bauer - prints the our of the day.
 * @h: variable.
 * @m: variable.
 * Return: Always 0.
 */

void jack_bauer(int h, int m)
{

	int h;
	int m;

	for (h = 0; h < 24; h++)
	{
		for (m = 0; m < 60; m++)
		{

			_putchar(h / 10 + '0');
			_putchar(h % 10 + '0');
			_putchar(':');
			_putchar(m / 10 + '0');
			_putchar(m % 10 + '0');
			_putchar('\n');

		}
	}
}
