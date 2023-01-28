#ifndef _MAIN_H
#define _MAIN_H

#include <stdlib.h>
#include <stddef.h>
#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
/**
* struct op - flag / function object
* @c: flag
* @f: function
*/

typedef struct node
{
	char *c;
	int (*f)(va_list);
} node_t;

int _printf(const char *format, ...);
int _putchar(char c);
int print_c(va_list args);
int (*get_func(char s))(va_list args);
int print_s(va_list args);
int print_d(va_list args);
int print_i(va_list args);
int print_b(va_list args);
int print_R(va_list args);
int print_S(va_list args);
int print_p(va_list args);
int print_r(va_list args);
int print_o(va_list args);
int print_x(va_list args);
int print_X(va_list args);
int print_percent(va_list args);
#endif
