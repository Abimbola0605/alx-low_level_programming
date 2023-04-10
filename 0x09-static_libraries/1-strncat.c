#include "main.h"

/**
 * _strncat - concatenates n bytes from a string to another
 * @dest: string destination
 * @src: string source
 * @n: num of bytes of string to concatenate
 *
 * Return: a pointer to the reslting str dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';

	return (dest);
}
