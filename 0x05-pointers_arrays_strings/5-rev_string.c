/**
 * rev_string - prints the length of a string.
 * @s: pointer.
 *
 **/

void rev_string(char *s)
{
	int a, b;
	char holberton_al_reves;

	a = 0;
	b = 0;

		while (s[a] != '\0')
		{
			a++;
		}

		a = a - 1;
		while (a > b)
		{
			holberton_al_reves = s[b];
			s[b] = s[a];
			s[a] = holberton_al_reves;
			a--;
			b++;
		}

	}

}
