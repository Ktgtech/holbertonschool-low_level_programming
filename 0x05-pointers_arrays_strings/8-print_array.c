#include "holberton.h"
/**
 * print_array - prints n elements of an array of integers
 * @a: pointer
 * @n: variable
 *
 */
void print_array(int *a, int n)
{
	int count = 0;
	while (count < n)
	{
		printf("%d", a[count]);
		count++;
		if (count != n)
		{
			printf(", ");
		}
	}
	printf("\n");
}
