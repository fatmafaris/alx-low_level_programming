#ifndef MAIN_H
#define MAIN_H
#include <stdlib.h>

int _putchar(char c);
void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
int main(int argc, char const *argv[]);
void print_int(int n);
int _atoi(const char *s);
void _puts(char *str);

#endif
