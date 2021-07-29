#include "holberton.h"
#include <stdio.h>
/**
 * _printf - our own printf.
 * @format: a char pointer named format.
 *
 * Return: an int
 */

int _printf(const char *format, ...)
{
	va_list args;
	unsigned int j = 0;
	int g = 0;
	int count = 0;
	
	va_start(args, format);

	if (format == NULL)
	{
		return (0);
	}
	while (format[j] != '\0')
	{
		if (format[j] != '%')
		{
			_putchar(format[j]);
			count++;
		}
		else
		{
			g = printf_get_function(format + j)(args);
			/*if (!g)
			{
				_putchar(format[j]);
			}*/
		}
		j++;
	}
	va_end(args);
	return (count + g);
}
