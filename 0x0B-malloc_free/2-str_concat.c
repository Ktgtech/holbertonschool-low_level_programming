#include "holberton.h"
#include <stdlib.h>
/**
 * str_concat -  concatenates two strings.
 * @s1: pointer parameter.
 * @s2: pointer parameter.
 * Return: null or pointer.
 **/
char *str_concat(char *s1, char *s2)
{
	char *p = NULL;
	int it, i1, i2, i, c;
	if (*s1 == NULL || *s2 == NULL)
	{
		*s1 = " ";
		*s2 = " ";
	}

	for (i1 = 0; s1[i1] != '\0'; i1++)
	{
	}
	for (i2 = 0 ; s2[i2] != '\0'; i2++)
	{
	}
	it = i1 + i2;

	p = (char *)malloc((it + 1)  * sizeof(char));

	if (p == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; s1[i] != '\0'; i++)
		{
			p[i] = s1[i];
		}
		for (c = 0; s2[c]; c++)
		{
			p[i] = s2[c];
			i++;
		}
		return (p);
	}
}
