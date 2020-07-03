#include "holberton.h"
/**
 *opr - give the result of the exercise.
 *@i: parameter.
 *@n: parameter.
 * Return: 0 or 1.
 **/
int opr(int i, int n)
{
	if ((n % i == 0) || (n < 2))
	{
		return (0);
	}
	else if (i == n - 1)
	{
		return (1);
	}
	else
	{
		return (opr(i + 1, n));
	}
}
/**
 * is_prime_number - prinicpal function.
 * @n: parameter.
 * Return: the result for the main.
 **/
int is_prime_number(int n)
{
	return (opr(2, n));
}
