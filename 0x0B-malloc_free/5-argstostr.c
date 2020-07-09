#include "holberton.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of your program.
 * @ac: parameter.
 * @av: parameter array.
 * Return: pointer or null.
 */

char *argstostr(int ac, char **av)
{
	int i, i2, leng, buf = 0;
	char *p;

	if (ac == 0 || av == 0)
	{
		return (0);
	}

	for (i = 0; av[i]; i++)
	{

		for (i2 = 0; av[i][i2]; i2++)
		{
			leng += 1;
		}
	}
	p = ((char *)malloc(leng * sizeof(char *) + ac + 1));
	if (!p)
		return (0);

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
	return (p);
}
