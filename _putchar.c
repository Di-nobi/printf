#include <unistd.h>
#include "main.h"
/**
 * _putchar - writes the cahr c to stdout
 * @c: The character to print
 * Return: 1 on success or -1 on error
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
