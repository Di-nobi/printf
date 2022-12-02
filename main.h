#ifndef _MAIN_
#define _MAIN_

#include <stdlib.h>
#include <stddef.h>
#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>
#include <limits.h>

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
int print_u(va_list args);
int print_o(va_list args);
int print_x(va_list args);
int print_X(va_list args);
int print_percent(va_list args);
#endif
