#include "holberton.h"
/**
 * cap_string -  concatenates two strings.
 * @s: parameter.
 * Return: p.
 **/
char *cap_string(char *s)
{
	char *p = s;
	int i = 0;

	while (*s != '\0')
	{
		switch (s[i])
		{
		case ' ':
		case '\t':
		case '\n':
		case ',':
		case ';':
		case '.':
		case '!':
		case '?':
		case '"':
		case '(':
		case ')':
		case '{':
		case '}':

		if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
		{
			s[i + 1] = s[i + 1] - 32;

		}
		}
		s++;
		i++;
	}
		if (s[0] >= 'a' && s[0] <= 'z')
		{
			s[0] = s[0] - 32;
		}

		return (p);

}
