#include "holberton.h"
/**
 * _strcmp -  concatenates two strings.
 * @s1: parameter.
 * @s2: parameter.
 * Return: value of rest.
 **/

int _strcmp(char *s1, char *s2)
{

	for ( ; *s1 == *s2; s1++, s2++)
		if (*s1 == '\0')
			return (0);
	return (*s1 - *s2);


}
