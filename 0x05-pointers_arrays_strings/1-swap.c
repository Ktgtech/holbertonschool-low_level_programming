#include "holberton.h"

/**
 * swap_int - function that swaps the values of two integers.
 *@a: poniter.
 *@b: pointer.
 **/

void swap_int(int *a, int *b)
{
	int sv = *a;

	*a = *b;
	*b = sv;

}
