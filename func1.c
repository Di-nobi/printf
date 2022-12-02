#include "main.h"

/**
 * print_c - prints character
 * @args: character argument
 * Return: number of characters
 */
int print_c(va_list args)
{
	int c;

	c = va_arg(args, int);
	return (_putchar(c));
}

/**
 * print_d - prints a decimal
 * @args: decimal argument
 * Return: counter
 */
int print_decimal(va_list args)
{

	unsigned int absolute, aux, countnum, count;
	int n;

	count = 0;
	n = va_arg(args, int);
		if (n < 0)
		{
			absolute = (n * -1);
			count += _putchar('-');
		}
		else
			absolute = n;

	aux = absolute;
	countnum = 1;
	while (aux > 9)
	{
		aux /= 10;
		countnum *= 10;
	}
	while (countnum >= 1)
	{
		count += _putchar(((absolute / countnum) % 10) + '0');
		countnum /= 10;
	}
	return (count);
}

/**
 * print_i - prints integer
 * @args: integer argument
 * Return: the decimal function
 */

int print_integer(va_list args)
{
	return (print_d(args));
}

/**
 * print_string - prints a string
 * @args: string  argument
 * Return: number of characters
 */
int print_string(va_list args)
{
	int i, count = 0;
	char *str;

	i = 0;
	str = va_arg(args, char*);
	if (str == NULL)
		str = "(null)";
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
		count++;
	}
	return (count);
}
/**
 * print_percent - pass the percent
 * @args: string  argument
 * Return: return the percent
 */
int print_percent(va_list args)
{
	char *percent;

	percent = "%";
	if (va_arg(args, int) == *percent)
	{
		return (*percent);
	}
	return (*percent);
}
