#include "main.h"

/**
 * _printf - fnction to be printed in console
 * @format: Array to be checked
 * Return: number of character printed
 */

int _printf(const char *format, ...)
{
        int num = -1;

        if (format != NULL)
{
        int i;
        int (*p)(va_list);
        va_list args;

        va_start(args, format);

        if (format[0] == '%' && format[1] == '\0')
                return (-1);

        num = 0;

        for (i = 0; format[i] != '\0'; i++)
{
        if (format[i] == '%')
{
        if (format[i + 1] == '%')
{
        num = num + _putchar(format[1]);
        i++;
}
else
{
        p = get_func(format[i + 1]);
        if (p)
                num = num + p(args);
        else
                num = _putchar(format[i]) + _putchar(format[i + 1]);
	   i++;
}
}
else

	num = num + _putchar(format[i]);
}
va_end(args);
}
return (num);
}
