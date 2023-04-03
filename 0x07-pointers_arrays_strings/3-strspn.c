#include "main.h"

/**
 *  _strspn - gets the length of a prefix substring
 *  @accept: string containing the list of char
 *  @s: evaluate string
 *
 *  Return: the number of bytes in the initial segment of s which
 *  consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int j, x, i, flag;

	i = 0;

	for (j = 0; s[j] != '\0'; j++)
	{
		flag = 0;
		for (x = 0; accept[x] != '\0'; x++)
		{
			if (s[j] == accept[x])
			{
				i++;
				flag = 1;
			}
		}
		if (flag == 0)
		{
			return (i);
		}
	}
	return (0);
}
