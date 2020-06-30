#include "holberton.h"
/**
 * print_diagsums - sum of the 2 diagonals of a square matrix of integers.
 * @a: array.
 * @size: parameter.
 */
void print_diagsums(int *a, int size)
{
	int i, sum, sum2;

	sum = 0;
	sum2 = 0;
	for (i = 0; i < size; i++)
	{
		sum += *(a + i * (size + 1));
		sum2 += *(a + ((i + 1) * (size - 1)));
	}

			printf("%d, %d\n", sum, sum2);

}
