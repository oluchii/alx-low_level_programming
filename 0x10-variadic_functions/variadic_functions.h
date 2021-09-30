#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>
#include <stdio.h>
void _putchar(char);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *seperator, const unsigned int n, ...);
void print_strings(const char *seperator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
