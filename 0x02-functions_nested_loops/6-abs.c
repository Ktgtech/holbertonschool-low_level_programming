#include "holberton.h"

/**
 * _abs - check the code for Holberton School students.
 * @r : random
 * Return: r.
 */

int _abs(int r)
{
	if (r < 0)
	{
		r = (r * (-1));
	}

	return (r);
}
