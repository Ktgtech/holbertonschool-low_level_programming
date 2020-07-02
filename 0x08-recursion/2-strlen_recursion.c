#include "holberton.h"
/**
 * _strlen_recursion - returns the length of a string.
 * @s: array parameter.
 * Return: the leng of the string.
 **/
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	s = (s + 1);
	return (1 + _strlen_recursion(s));
}
