#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplicate two arguments.
 * @argc: parameter counter.
 * @argv: parameter array.
 * Return: always 0.
 **/
int main(int argc, char **argv)
{
	int mu1 = 0, mu2 = 0, mu = 0;

	if (argc == 3)
	{
	mu1 = atoi(argv[1]);
	mu2 = atoi(argv[2]);
	mu = mu1 * mu2;
	printf("%d\n", mu);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
