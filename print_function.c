#include "holberton.h"
#include <stdio.h>
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

/**
* _print_numbers - function to print numbers.
* @args: to get tthe string.
* Return: a integer
*/
int _print_numbers(va_list args)
{
	int a = va_arg(args, int);
	int cont = 0;
	int b = 0;
	int div = 1;
	int pr;

	pr = a % 10;
	a = a / 10;

	if (pr < 0)
	{
		a = -a;
		pr = -pr;
		_putchar('-');
		cont++;
	}
	b = a;

	if (b > 0)
	{
	while ((b / 10) != 0)
	{
		b = b / 10;
		div = div * 10;
	}
	b = a;

	while (div >= 1)
	{
		_putchar((b / div) + '0');
		b = b % div;
		div = div / 10;
		cont++;
	}
	}
	_putchar(pr + '0');
	cont++;
	return (cont);
}

