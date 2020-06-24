#include "holberton.h"
/**
 *_strlen - prints the length of a string.
 * @S: pointer.
 **/

int _strlen(char *s)
{
	int i;
	int ret = 0;

	for (i = 0; s[i] != '\0'; i++)

		ret++;

	return (ret);

}
