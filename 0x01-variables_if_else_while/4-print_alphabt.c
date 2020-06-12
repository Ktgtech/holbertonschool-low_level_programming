#include <stdio.h>
/**
 *main - Entry point
 *Return: Always 0 (Success)
 */
int main(void)
{
	char be = 'a';

	while (be <= 'z')
	{
		if ((be == 'q') || (be == 'e'))
		{
			(be++);
		}
			else
			{
				putchar(be);
				be++;
			}

	}
	putchar(10);
	return (0);
}
