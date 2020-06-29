#include "holberton.h"
/**
 * _strstr - locates a character in a string..
 * @haystack: punter parameter.
 * @needle: parameter.
 * Return: p or 0.
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int i, a;
	char *p = needle;

	for (i = 0; *(haystack + i) != '\0'; i++)
	{
		for (a = 0; *(needle + a) != '\0'; a++)
		{
			if (*(haystack + i) == *(needle + a))
			{
				return (p);
			}
		}
	}
	return (0);
}
