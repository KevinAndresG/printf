#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

/**
 * struct print - struct print_t
 *
 * @ptr: The operator
 * @pk: The function associated
 */
typedef struct print
{
	char *ptr;
	int (*pk)(va_list args);

} print_t;

int _putchar(char c);
int _printf(const char *format, ...);
int _print_c(va_list args);
int _print_s(va_list args);
int _print_mod(va_list args);
int _print_numbers(va_list args);
int _print_unknown(va_list args);
int (*printf_get_function(const char *format))(va_list);

#endif /* HOLBERTON_H */
