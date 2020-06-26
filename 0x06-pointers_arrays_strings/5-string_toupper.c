#include "holberton.h"
/**
 * string_toupper -  concatenates two strings.
 * @n: parameter.
 * Return: p.
 **/

char *string_toupper(char *n)
{
	char *p = n;

	while (*n != '\0')
	{
		if ((*n >= 'a') && (*n <= 'z'))
		{
			*n = (*n - 32);
		}

		n++;
	}

	return (p);
}
