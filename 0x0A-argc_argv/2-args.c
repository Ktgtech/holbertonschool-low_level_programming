#include <stdio.h>
/**
 * main - program that prints the arguments.
 * @argc: parameter counter.
 * @argv: parameter array.
 * Return: always 0.
 **/
int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
