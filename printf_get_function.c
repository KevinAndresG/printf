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
		{NULL, _print_unknown},
	};
	int a = 0;

	while (ls[a].ptr != NULL)
	{

		if (*format == *(ls[a].ptr))

			break;
		a++;
	}

	return (ls[a].pk);
}

/**
* _print_unknown - print unknowns characters.
* @args: a list
* Return: an int
*/
int _print_unknown(va_list args)
{
(void)args;
return (-1);
}
