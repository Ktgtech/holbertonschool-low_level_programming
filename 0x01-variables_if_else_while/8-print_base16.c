#include <stdio.h>

/**
 *main - Entry point
 *Return: Always 0 (Success)
 */

int main(void)
{
	int n;
	int l;

	n = '0';
	l = 'a';
	while (n <= '9')
	{
		putchar(n);
		n++;
	}

		while (l <= 'f')
		{
			putchar(l);
			l++;
		}

		putchar('\n');

	return (0);
}
