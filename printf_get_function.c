#include "holberton.h"
#include <stdio.h>
/**
 * printf_get_function - obtain the functions to printf
 * @format: char pointer
 * Return: an int
 */
int (*printf_get_function(const char *format))(va_list)
{
	print_t ls[] = {
	    {"c", _print_c},
	    {"s", _print_s},
	    {"i", _print_numbers},
	    {"d", _print_numbers},
	    {"%", _print_mod},
	    {NULL, NULL},
	};
	int a = 0;
	
	while (ls[a].ptr != NULL)
	{

		if (*format == *(ls[a].ptr))
			break;
		a++;
	}
	/**if (ls[a].ptr == NULL)
	{
		return(0);
	}*/
	return (ls[a].pk);
}
