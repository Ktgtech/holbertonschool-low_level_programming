#include "holberton.h"
/**
 * multi - auxiliar.
 * @n1: parameter.
 * @n: parameter.
 * Return: r.
 **/

int multi(int n1, int n)
{
	if (n1 * n1 == n)
		return (n1);

	if (n1 * n1 > n)
		return (-1);

	return (multi(n1 + 1, n));
}

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: parameter.
 * Return: n.
 **/
int _sqrt_recursion(int n)
{
	return (multi(1, n));
}
