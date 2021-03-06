#ifndef MAIN_H_
#define MAIN_H_
#include <stdio.h>
#include <stdlib.h>

char *big_mult(char *s1, char *s2);
int _putchar(char c);
int _strlen(char *s);
void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);

#endif
