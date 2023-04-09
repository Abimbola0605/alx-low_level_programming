#include <stdio.h>
#include "main.h"

/**
 * main - program that print it's name
 * @argv: arguments of array
 * @argc: arguments of num
 *
 * Return: always 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
