#include "holberton.h"
/**
 * printf_get_function - 
 * 
 * 
 */
int (*printf_get_function(const char *format))(va_list)
{
    print_t ls[] = {
        {"c", _print_c},
        {"s", _print_s},
        {NULL, NULL},
    };
    int a = 0;

        while (ls[a].ptr)
        {
            if (format && (ls[a].ptr) == 0 )
            break;

            a++;

        }
        return (ls[a].pk);
}