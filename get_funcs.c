#include "main.h"
/**
 * get_func - gets and return the correct function
 * @s: array to be checked
 * Return: a function to be returned
 */

int (*get_func(char s))(va_list)
{
	int j = 0;
        node_t node[] = {
                {"c", print_c},
                {"s", print_s},
                {"%", print_percent},
                {"d", print_d},
                {"i", print_i},
		{"b", print_b},
		{"o", print_o},
		{"x", print_x},
		{"X", print_X},
		{"p", print_p},
		{"S", print_S},
		{"r", print_r},
		{"R", print_R},
                {NULL, NULL}
        };

	while (node[j].c)
{
               if (node[j].c[0] == s)
              	return (node[j].f);
	       j++;
}
        return (NULL);
}
