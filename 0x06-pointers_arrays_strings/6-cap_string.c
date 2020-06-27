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

	for ( ;*s != '\0'; s++, i++)
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
			s[i + 1] = s[i + 1] - 32;
		}
	}
	if (s[0] >= 'a' && s[0] <= 'z')
		s[0] = s[0] - 32;

	return (p);
}
