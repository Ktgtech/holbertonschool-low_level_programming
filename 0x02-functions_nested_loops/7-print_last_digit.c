#include "holberton.h"

/**
 * print_last_digit - check the code for Holberton School students.
 * @r : random.
 * Return: Always 0.
 */

int print_last_digit(int r)
{

	r = (r % 10);

	if (r < 0)
	{
		r = (r * (-1));
		_putchar(r + '0');
		return (r);
	}
	else
	{
	_putchar(r + '0');
	return (r);
	}
}
