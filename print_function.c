#include "holberton.h"

/**
  * _printf_c - print char.
  * @args: our list.
  * Return: an integer 
  */
int _print_c(va_list c)
{
    int h = va_arg(c, int);
    write(1, &h, 1);
    return (1);
}
/**
  * 
  * 
  * 
  */
int _print_s(va_list s)
{
    int i = 0;
    char *str = va_arg(s, char *);
    if (str == NULL)
    {
        return (NULL);
    }

    while (str[i])
    {
        i++;
    }
    write(1, str, i);
    return (i);
}
