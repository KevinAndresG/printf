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
* Return: an integer
*/
void print(long n)
{
    if (n < 0)
    {
        _putchar('-');
        n = -n;
    }
    if (n / 10)
        print(n / 10);
    _putchar(n % 10 + '0');
}

int _print_numbers(va_list args)
{
    int a = va_arg(args, int);
    int count = 0, sum = 0;
    if (a < 0)
    {
        count += 1;
    }

    sum = a / 10;
    while (count)
    {
        if (sum != 0)
        {
            sum = sum / 10;
        }
        else
        {
        break;
        }
        count++;
    }
    print(a);
    return (count);
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
