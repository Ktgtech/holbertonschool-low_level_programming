#include "holberton.h"
/**
 * _strncat -  concatenates two strings.
 * @dest: parameter.
 * @src: parameter.
 * @n: parameter.
 * Return: p.
 **/
char *_strncat(char *dest, char *src, int n)
{
	int i;
	char *p = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	i = 0;
	while ((i < n) && ((*dest = *src) != '\0'))
	{
		dest++;
		src++;
		i++;
	}
	return (p);
}
