#include "main.h"
/**
 * hex_print - prints a char, hexadecimal value
 * @c: char to print
 * Return: numbers of chars printed (always 2)
 */

static int hex_print(char c)
{
	int count;
	char diff = 'A' - ':';
	char d[2];

	d[0] = c / 16;
	d[1] = c % 16;

	for (count = 0; count < 2; count++)
	{
		if (d[count] > 10)
			_putchar('0' + diff + d[count]);
		else
			_putchar('0' + d[count]);
	}
	return (count);
}
/**
 * print_S - prints a string and non printable character ascii value
 * @S: str to print
 * Return: numbers of character printed
 */

int print_S(va_list args)
{
	unsigned int i;
	int count = 0;
	char *str = va_arg(args, char *);

	if (str == NULL)
	{
		str = "(null)";
	}

	for (i = 0; str[i]; i++)
	{
		if (str[i] < 32 || str[i] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			count += 2;
			count += hex_print(str[i]);

		}
		else
		{
			_putchar(str[i]);
			count++;
		}
	}
	return (count);
}

/**
 * print_r - prints a string in reverse
 * @r: string to print
 *
 * Return: numbers of chars printed
 */

int print_r(va_list args)
{
	char *str;
	int i, count = 0;

	str = va_arg(args, char *);
	if (str == NULL)
		str = "(null)";
	for (i = 0; str[i]; i++)
		;
	for (i -= 1; i >= 0; i--)
	{
		_putchar(str[i]);
		count++;
	}
	return (count);
}
