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

	if (s[0] == c)
		return (&s[0]);

	for (i = 0; *(s + i) != '\0'; i++)
	{
		if (s[i] == c)
		{
			aux = &s[i];
			return (aux);
		}
	}
	return (0);
}
