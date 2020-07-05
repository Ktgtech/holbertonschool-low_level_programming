#include <stdio.h>
/**
 * main - program that prints the number of arguments.
 * @argc: parameter counter.
 * @argvUnused:no use parameter array.
 * Return: always 0.
 **/
int main(int argc, char **argvUnused __attribute__((unused)))
{
	printf("%d\n", argc);

	return (0);
}
