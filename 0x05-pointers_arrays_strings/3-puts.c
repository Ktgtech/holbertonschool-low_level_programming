#include "holberton.h"
/**
 * _strlen - prints the length of a string.
 * @s: pointer.
 * Return: always ret.
 **/
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
