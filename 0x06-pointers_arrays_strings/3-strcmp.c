#include "main.h"

/**
  * _strcmp - Compares two strings
  * @s1: The first string
  * @s2: The second string
  *
  * Return: int value
  */
int _strcmp(char *s1, char *s2)
{
	int a = 0, b = 0, p = 0, x = 0, lim;

	while (s1[a])
	{
		a++;
	}

	while (s2[b])
	{
		b++;
	}

	if (a <= b)
	{
		lim = a;
	}
	else
	{
		lim = b;
	}

	while (p <= lim)
	{
		if (s1[p] == s2[p])
		{
			p++;
			continue;
		}
		else
		{
			x = s1[p] - s2[p];
			break;
		}

		p++;
	}

	return (x);
}
