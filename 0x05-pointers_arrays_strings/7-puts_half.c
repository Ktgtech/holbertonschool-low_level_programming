#include "holberton.h"

/**
 * puts_half -  prints half of a string.
 * @str: punter.
 **/

void puts_half(char *str)
{
	int leng, ev2, ev3;

	leng = 0;
	while (str[leng] != '\0')
	{
		leng++;
	}

	if (leng % 2 == 0)
	{
		ev2 = leng / 2;
		while (str[ev2] != '\0')
		{
			_putchar(str[ev2]);
			ev2++;
		}
	}
	else
	{
		ev3 = (leng - 1) / 2;
		ev3++;

		while (str[ev3] != '\0')
		{
			_putchar(str[ev3]);
			ev3++;
		}

	}
	_putchar('\n');

}
