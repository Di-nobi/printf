#ifndef _MAIN_
#define _MAIN_

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
int print_string(va_list args);
int print_decimal(va_list args);
int print_integer(va_list args);
int print_binary(va_list args);
int print_u(va_list args);
int print_octal(va_list args);
int print_x(va_list args);
int print_X(va_list args);

#endif
