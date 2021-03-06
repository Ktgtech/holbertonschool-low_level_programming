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
	int i, i2, buf, leng;
	char *p;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	i = i2 = buf = leng = 0;

	for (i = 0; av[i]; i++)
	{
		for (i2 = 0; av[i][i2]; i2++)
		{
			leng++;
		}
	}
	p = (char *)malloc(leng * sizeof(char) + ac + 1);
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; av[i]; i++, buf++)
	{
		for (i2 = 0; av[i][i2]; i2++, buf++)
		{
			p[buf] = av[i][i2];
		}
		p[buf] = '\n';
	}
	p[buf] = '\0';
	return (p);
}
