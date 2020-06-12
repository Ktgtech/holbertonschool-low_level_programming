#include <stdio.h>
/**
 *main - Entry point
 *Return: Always 0 (Success)
 */
int main(void)
{
	char al = 'a';
	char up = 'A';

	while (al <= 'z')
	{
		putchar(al);
		al++;
	}

	while (up <= 'Z')
	{
		putchar(up);
		up++;
	}

	putchar(10);

	return (0);
}
