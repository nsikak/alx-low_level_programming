#ifndef main_h
#define main_h
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void simple_print_buffer(char *buffer, unsigned int size);
#endif
