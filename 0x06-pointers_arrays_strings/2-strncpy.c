#include "holberton.h"
/**
 * _strncpy - copies a string.
 * @dest: parameter.
 * @src: parameter.
 * @n: parameter.
 * Return: p.
 **/

char *_strncpy(char *dest, char *src, int n)
{
	int i;
	char *p = dest;

	i = 0;
	while ((i < n) && ((*dest = *src) != '\0'))
	{
		dest++;
		src++;
		i++;
	}

	while (i < n)
	{
		*dest = '\0';
		dest++;
		i++;

	}
	return (p);
}
