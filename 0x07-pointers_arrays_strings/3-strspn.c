 #include "holberton.h"
/**
 * _strspn - gets the length of a prefix substring..
 * @s: punter parameter.
 * @accept: punter parameter.
 * Return: su.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int su = 0;
	unsigned int i, a;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		if (i != su)
			break;
		for (a = 0; *(accept + a) != '\0'; a++)
		{
			if (*(s + i) == *(accept + a))
			{
				su += 1;
			}
		}
	}
	return (su);
}
