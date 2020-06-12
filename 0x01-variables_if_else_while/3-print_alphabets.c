#include <stdio.h>
/**
 *main - Entry point
 *Return: Always 0 (Success)
 */
int main(void)
{
	char al = 'a';

	while (al <= 'z')
	{
		putchar(al);
		putchar(toupper(al));
		al++;
	}
	putchar(10);
	return (0);
}
