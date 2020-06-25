#include "holberton.h"
/**
 * _strcat - concatenates two strings.
 * @dest: parameter.
 * @src: parameter.
 * Return: ex.
 **/

char *_strcat(char *dest, char *src)
{
	char *ex = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while ((*dest = *src) != '\0')
	{
		dest++;
		src++;
	}

	return (ex);
}
