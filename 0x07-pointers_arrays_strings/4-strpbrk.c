#include "holberton.h"
/**
 * _strpbrk - locates a character in a string..
 * @s: punter parameter.
 * @accept: parameter.
 * Return: null or string.
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, a;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (a = 0; *(accept + a) != '\0'; a++)
		{
			if (*(s + i) == *(accept + a))
			{
				return (&s[i]);
			}
		}
	}
	return (0);
}
