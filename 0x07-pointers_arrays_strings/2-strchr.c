#include "holberton.h"
/**
 * _strchr - locates a character in a string..
 * @s: punter parameter.
 * @c: parameter.
 * Return: s.
 */
char *_strchr(char *s, char c)
{
	unsigned int i;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
		return (&s[i]);

	return (0);
}
