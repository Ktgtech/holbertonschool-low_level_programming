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

	i = 0;
	a = 0;
	while (*(haystack + i) != '\0')
	{
		while (*(haystack + i) && *(needle + i) && *(haystack + i) == *(niddle + i))
		{
			i++;
		}
		if (!needle[i])
		{
			return (haystack);
		}
		haystack++;
	}
	return (0);
}
