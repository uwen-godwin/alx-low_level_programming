#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

char *string_nconcat(char *s1, char *s2, unsigned int n);
void *malloc_checked(unsigned int b);
int *array_range(int min, int max);
void errors(void);
void *_calloc(unsigned int nmemb, unsigned int size);
int _strlen(char *s);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
int _putchar(char c);
int is_digit(char *s);

#endif
