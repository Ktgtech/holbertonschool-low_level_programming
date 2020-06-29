#include "holberton.h"
/**
 * _memcpy -  fills memory with a constant byte.
 * @dest: punter.
 * @src: punter.
 * @n: parameter.
 * Return: p;
 **/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		dest[i] = *(src + i);
		i++;
	}
	return (dest);
}
