#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

typedef struct print
{
    char *ptr;
    int (*pk)(va_list args);

} print_t;

int _putchar(char c);
int _printf(const char *format, ...);
int _print_c(va_list c);
int _print_s(va_list s);

#endif /* HOLBERTON_H */
