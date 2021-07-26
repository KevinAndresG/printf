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

int _printf(const char *format, ...);

#endif /* HOLBERTON_H */
