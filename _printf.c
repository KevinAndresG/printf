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
		return (-1);
	}
	if (format[j] == '%' && format[j + 1] == '\0')
	{
		return (-1);
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
			j++;
			g = printf_get_function(format + j)(args);
			if (g == -1)
			{
				_putchar('%');
				_putchar(format[j]);
				g += 2;
			}
		}
		j++;
	}
	va_end(args);
	return (count + g);
}
