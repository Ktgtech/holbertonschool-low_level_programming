#include "holberton.h"
/**
 * _strchr - locates a character in a string..
 * @s: punter parameter.
 * @c: parameter.
 * Return: s.
 */
char *_strchr(char *s, char c)
{
	char *aux;
	unsigned int i;

	for (i = 0; *s != '\0'; i++)
	{
		if (s[i] == c)
		{
			aux = &s[i];
			return (aux);
		}
	}
	return (0);
}
