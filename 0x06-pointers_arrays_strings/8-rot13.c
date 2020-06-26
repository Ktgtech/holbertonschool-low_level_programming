#include "holberton.h"
/**
 * rot13 - encodes a string using rot13.
 * @e: Argument pointer to char
 *
 * Return: Always 0.
 */
char *rot13(char *e)
{
	int i;
	int j;
	char ch1[] = "ABCDEFGHIJKLMNOPQRSTUWXYZabcdefghijklmnopqrstuwxyz";
	char ch2[] = "NOPQRSTUVWXYZABCDEFGHJKLMnopqrstuvwxyzabcdefghjklm";

	for (i = 0; e[i] != '\0'; i++)
	{
		j = 0;
		while (ch1[j] != '\0')
		{
			if (e[i] == ch1[j])
			{
				e[i] = ch2[j];
				break;
			}
			j++;
		}
	}
	return (e);
}
