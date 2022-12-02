#include "main.h"
/**
 * get_func - gets and return the correct function
 * @s: array to be checked
 * Return: a function to be returned
 */

int (*get_func(char s))(va_list args)
{
        node_t node[] = {
                {"c", print_c},
                {"s", print_string},
                {"d", print_decimal},
                {"i", print_integer},
                {"b", print_binary},
                {NULL, NULL}
        };

        int j;
	
	for (j = 0; node[j].c != NULL; j++)
{
               if (*node[j].c == s)
              	return (node[j].f);
}
        return (NULL);
}
