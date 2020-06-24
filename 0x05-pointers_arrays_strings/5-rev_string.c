#include "holberton.h"
/**
 * rev_string - prints the length of a string.
 * @s: pointer.
 *
 **/

void rev_string(char *s)
{
	int a, b;
	char hr;

	a = 0;
	b = 0;

		while (s[a] != '\0')
		{
			a++;
		}

		a = a - 1;
		while (a > b)
		{
			hr = s[b];
			s[b] = s[a];
			s[a] = hr;
			a--;
			b++;
		}


}
