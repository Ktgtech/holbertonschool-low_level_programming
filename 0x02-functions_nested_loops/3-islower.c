#include "holberton.h"

/**
 * _islower - check the characters.
 * @c : random variable.
 * Return: Always 0.
 */

int _islower(int c)
{

	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
