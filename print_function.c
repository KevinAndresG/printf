#include "holberton.h"

/**
  * _print_c - print char.
  * @args: our list.
  * Return: an integer
  */
int _print_c(va_list args)
{
	int h = va_arg(args, int);

	write(1, &h, 1);
	return (1);
}
/**
  * _print_s - print string
  * @args: to get tthe string
  * Return: an integer
  */
int _print_s(va_list args)
{
	int i = 0;
	char *str = va_arg(args, char *);

	if (str == NULL)
	{
		return (0);
	}

	while (str[i])
	{
		i++;
	}
	write(1, str, i);
	return (i);
}

/**
  * _print_mod - print string
  * @args: to get tthe string
  * Return: an integer
  */
int _print_mod(va_list args)
{
	int p = va_arg(args, int);

	p = '%';
	_putchar(p);
	return (1);
}
