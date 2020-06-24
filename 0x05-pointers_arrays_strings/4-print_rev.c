#include "holberton.h"
/**
 *  print_rev - prints a string, in reverse.
 * @s: pointer.
 **/
void print_rev(char *s)
{

	int a;

	a = 0;
	while (s[a] != '\0')
	{
		a++;

	}
		a = a - 1;

		while (a >= 0)
		{
			_putchar(s[a]);
			a--;
		}

		_putchar('\n');
}
