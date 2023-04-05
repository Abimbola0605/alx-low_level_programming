#include "main.h"
#include <stdio.h>

/**
 * _strpbrk -  searches a string for any of a set of bytes
 * @accept: string containing the bytes to fetch
 * @s: searching string
 *
 * Return:  pointer to the byte in s that matches one of the bytes in accept
 *  or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	int x, k;

	for (x = 0; *s != '\0'; x++)
	{
		for (k = 0; accept[k] != '\0'; k++)
		{
			if (*s == accept[k])
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL);
}