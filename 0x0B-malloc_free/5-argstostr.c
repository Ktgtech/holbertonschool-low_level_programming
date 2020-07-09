#include <stdlib.h>
#include "holberton.h"
/**
 * argstostr - concatenates all the arguments of your program.
 * @ac: parameter.
 * @av: parameter array.
 * Return: pointer or null.
 **/

char *argstostr(int ac, char **av)
{
	int i, i2, leng, buf = 0;
	char *p;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (i = 0; av[i]; i++)
	{
		for (i2 = 0; av[i][i2]; i2++)
		{
			leng++;
		}
	}
	p = (char *)malloc(leng * sizeof(char *) + ac + 1);
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; av[i]; i++)
	{
		for (i2 = 0; av[i][i2]; i2++)
		{
			p[buf] = av[i][i2];
			buf++;
		}
		p[buf] = '\n';
		buf++;
	}
	p[buf] = '\0';
	return (p);
}
