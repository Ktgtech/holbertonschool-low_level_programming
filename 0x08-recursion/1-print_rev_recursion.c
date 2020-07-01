#include "holberton.h"
/**
 * _puts_recursion -  prints a string, followed by a new line.
 * @s: array parameter.
 **/
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(++s);
	}
	s = s - 1;
	if (*s)
	{
		_putchar(*s);
		--s;
	}
	else
	{
		_putchar(10);
	}
}
