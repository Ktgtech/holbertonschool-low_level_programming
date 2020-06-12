#include <stdio.h>

/**
 *main - Entry point
 *Return: Always 0 (Success)
 */
int main(void)
{
	char ti = 'z';

	while (ti >= 'a')
	{
		putchar(ti);
		ti--;
	}
	return (0);
}
