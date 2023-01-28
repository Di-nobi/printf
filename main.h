#ifndef _MAIN_H
#define _MAIN_H

#include <stdlib.h>
#include <stddef.h>
#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>
#include <limits.h>

#define UNUSED(x) (void)(x)
#define BUFF_SIZE 1024

#define F_MINUS 1
#define F_PLUS 2
#define F_ZERO 4
#define F_HASH 8
#define F_SPACE 16
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
int get_flags(const char *format, int *x);
int get_precision(const char *format, int *x, va_list args);
#endif
