#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * digit - check if a number is a digit.
 * @argc: parameter counter.
 * @argv: parameter array.
 * @c: parameter counter.
 * @p: parameter position.
 * Return: always 0.
 **/

int digit(int argc, int c, unsigned int p, char **argv)
{
	for (c = 1; c < argc; c++)
	{
		for (p = 0; argv[c] != '\0' && p < strlen(argv[c]); p++)
		{
			if (isdigit(argv[c][p]) == 0)
				return (1);
		}
	}
	return (0);
}

/**
 * main - sum of digits.
 * @argc: parameter counter.
 * @argv: parameter array.
 * Return: always 0.
 **/

int main(int argc, char **argv)
{
	int i, sum = 0;

		if (digit(argc, 1, 0, argv) == 1)
		{
			printf("Error\n");
			return (1);
		}
		for (i = 0; i < argc; i++)
		{
			sum += atoi(argv[i]);
		}

			printf("%d\n", sum);

	return (0);
}
