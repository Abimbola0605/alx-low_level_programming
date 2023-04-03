#include "main.h"

/**
 * _memcpy - copies memory area
 * @src: memory area
 * @n: num of bytes
 * @dest: destination
 *
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
	{
		dest[j] = src[j];
	}
	return (dest);
}
