#include "holberton.h"
/**
 * _strlen - prints the length of a string.
 * @s: pointer.
 * Return: always ret.
 **/

int _strlen(char *s)
{
	int i;
	int ret = 0;

	for (i = 0; s[i] != '\0'; i++)

		ret++;

	return (ret);

}
