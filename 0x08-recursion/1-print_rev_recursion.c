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
		putchar(*s);
		--s;
	}
	else
	{
		putchar(10);
	}
}
