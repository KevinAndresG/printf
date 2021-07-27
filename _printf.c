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

	{
		while (format[j] != '\0')
		{
			if (format[j] != '%')
			{
				_putchar(format[j]);
			}
			j++;
		}
	}
	return (j);
}
