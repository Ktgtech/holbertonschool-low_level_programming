#include "holberton.h"
#include <stdlib.h>

/**
 * array_range - allocates memory
 * @min: array parameter.
 * @max: array parameter.
 * Return: Null or p.
 **/
int *array_range(int min, int max)
{
	int *p = NULL;
	int i, res;

	if (min > max)
		return (NULL);

	res = max - min;
	p = (int *)malloc(res * sizeof(int) + 1);

	if (!p)
		return (NULL);

	for (i = 0; min <= max; i++, min++)
		p[i] = min;

	return (p);
}
