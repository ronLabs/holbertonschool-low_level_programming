#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdio.h>

int _putchar(char c);
void *malloc_checked(unsigned int b);/*prototype function that allocates memory using malloc*/
char *string_nconcat(char *s1, char *s2, unsigned int n);/*function that concatenates two strings*/
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
#endif
