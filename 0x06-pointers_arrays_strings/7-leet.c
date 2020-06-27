#include "holberton.h"
/**
 * _strcat -  concatenates two strings.
 * @dest: parameter.
 * @src: parameter.
 **/

char *leet(char *s)
{
char let [] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
char num [] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};
int i;
char *p = s;

while (*s != '\0')
{
	i = 0;
	while(let[i] != '\0')
	{
		if (*s == let[i])
		{
			(*s = num[i]);
		}
		i++;

	}
	s++;
}
return (p);
}
