#include "holberton.h"
/**
 *  puts2 -  prints every other character of a string
 * @str: pointer.
 **/

void puts2(char *str)
{
	int i = 0;
	int aux = 0;

	while (str[i] != '\0')
	{
		if (aux % 2 == 0)
			_putchar(str[i]);
		aux++;
		i++;
	}
	_putchar('\n');
}
