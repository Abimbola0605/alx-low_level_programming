#include "main.h"
#include <stdio.h>

/**
 * main - A program that print all arguments it receives
 * @argv: arguments of array
 * @argc: arguments of num
 *
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
