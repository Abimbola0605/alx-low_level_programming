#include "main.h"
#include <stdio.h>

/**
 * main - print the num of arguments passed into the program
 * @argv: arguments of array
 * @argc: arguments of num
 *
 * Return: always 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
