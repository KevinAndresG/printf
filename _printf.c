#include "holberton.h"

/**
 * _printf - our own printf.
 * @format: a char pointer named format.
 *
 * Return: an int
 */

int _printf(const char *format, ...)
{
	va_list args;
	int j = 0;

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
		}
		else
		{
			j++;
			printf_get_function(format + j)(args);
		}
		j++;
	}
	va_end(args);
	return (j);
}
