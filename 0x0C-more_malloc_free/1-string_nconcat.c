#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * string_nconcat - allocates memory
 * @s1: array parameter.
 * @s2: array parameter.
 * @n: size of s2.
 * Return: Null or p.
 **/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int i, i2, leng, buf;

	i = i2 = leng = buf = 0;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i]; i++)
	{
	}
	for (i2 = 0; s2[i2]; i2++)
	{
	}
	if (n >= i2)
		leng = i + i2;
	else
		leng = n + i;
	p = (char *)malloc(leng * sizeof(char) + 2);
	if (!p)
		return (NULL);

	for (i = 0; s1[i]; i++, buf++)
	{
		p[buf] = s1[i];
	}
	if (n >= i2)
	{
		for (i2 = 0; s2[i2]; i2++, buf++)
		{
			p[buf] = s2[i2];
		}
	}
	else
		for (i2 = 0; i2 < n; i2++, buf++)
		{
			p[buf] = s2[i2];
		}
	p[buf] = '\0';
	return (p);
}
