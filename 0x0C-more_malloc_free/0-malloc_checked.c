#include "holberton.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory
 * @b: parameter of size.
 * Return: exit(98) or p.
 **/

void *malloc_checked(unsigned int b)
{
	void *p = NULL;

	p = malloc(b);

	if (!p)
	{
		exit(98);
	}
	return (p);
}
