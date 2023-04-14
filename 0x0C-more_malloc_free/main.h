#ifndef MAIN_H
#define MAIN_H

/**
 * File: main.h
 * Made: Abimbola
 * Task: Header file containing prototype for all the functions
 *       used in 0x0C. C -More malloc, free
 */

#include <stdlib.h>

int _putchar(char c);
void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
void errors(void);
int _strlen(char *s);
int is_digit(char *s);

#endif
