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

	i = 0;
	a = 0;
	while(haystack[i] != '\0')
	{
		if (*(haystack + i) == needle[a])
		{
			while (needle[a] != '\0')
			{
				if (haystack[i + a] == needle[a])
					return (p);
				a++;
			}
		}
		i++;
	}
	return (0);
}
