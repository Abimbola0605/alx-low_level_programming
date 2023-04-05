#include "main.h"

int actual_sqrt_recursion(int n, int i);

/**
 * _sqrt_recursion - returns the natural square root of num
 * @n: num to calc the squre rrot
 *
 * Return: square root result
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}

/**
 * actual_sqrt_recursion - find the natural sq root of a num
 * @n: num to calc the sq root
 * @i:input
 *
 * Return: square root result
 */
int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (actual_sqrt_recursion(n, i + 1));
}
