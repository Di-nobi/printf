#include "main.h"
/**
 * get_func - gets and return the correct function
 * @s: array to be checked
 * Return: a function to be returned
 */

int (*get_func(char s))(va_list)
{
        node_t arr[] = {
                {"c", print_c},
                {"s", print_s},
                {"d", print_d},
                {"i", print_i},
                {"b", print_b},
		{"%", print_percent},
                {NULL, NULL}
        };

        int j;
	
	for (j = 0; arr[j].c != NULL; j++)
{
               if (arr[j].c[0] == s)
              	return (arr[j].f);
}
        return (NULL);
}
