#include "holberton.h"
/**
 * _strcat -  concatenates two strings.
 * @a: parameter.
 * @n: parameter.
 **/
void reverse_array(int *a, int n)
{

	int b, help;

	n = n - 1;
	b = 0;
	while (b < n)
	{
		help = a[b];
		a[b] = a[n];
		a[n] = help;
		n--;
		b++;
	}

}
