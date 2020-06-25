#include "holberton.h"
/**
 * _strcmp -  concatenates two strings.
 * @s1: parameter.
 * @s2: parameter.
 * Return: value of rest.
 **/

int _strcmp(char *s1, char *s2)
{

	if (*s1 == '\0' || *s2 == '\0')
	{
		return (0);
	}
	else if (*s1 == *s2)
	{
	return (0);
	}
	else
	{
		return (*s1 - *s2);
	}

}
