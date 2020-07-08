#include "holberton.h"
#include <stdlib.h>
/**
 * _strdup - copy of the string given as a parameter.
 * @str: pointer parameter.
 * Return: null or pointer.
 **/


char *_strdup(char *str)
{
	if (str == NULL)
	{
		return (0);
	}
	else
	{
		unsigned int i = 0;
		unsigned int c = 0;
		char *p = NULL;

		for (i = 0; str[i] != '\0'; i++)
		{
		}
		p = (char *)malloc(i * sizeof(char));

		if (p)
		{
			for (c = 0; c < (i + 1); c++)
			{
				p[c] = str[c];
			}
			return (p);
		}
		else
		{
			return (0);
		}
	}
}
