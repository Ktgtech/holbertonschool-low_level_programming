#include "holberton.h"

/**
 * print_to_98 - Print the numbers from n to 98.
 * @n: is a variable from the main.c
 * Return: Always 0.
 */
void print_to_98(int n)
{

	while (n < 98)
	{
		if (n != 98)
		{
			printf("%d, ", n);
		}
		else
		{
			printf("%d\n", n);
		}
		n++;
	}

	while (n >= 98)
	{
		if (n != 98)
		{
			printf("%d, ", n);
		}
		else
		{
			printf("%d\n", n);
		}
		n--;
	}

	}
