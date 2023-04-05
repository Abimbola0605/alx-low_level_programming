#include "main.h"

/**
 * factorial - factorial num return
 * @n: num to return
 *
 * Return: facto of n
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
