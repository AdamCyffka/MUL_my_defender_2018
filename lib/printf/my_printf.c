/*
** EPITECH PROJECT, 2018
** my_printf.c
** File description:
** print
*/

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include "printf.h"

int my_printf(char *format, ...)
{
    int tmp = 0;
    char type;
    va_list mylist;

    va_start(mylist, format);
    for (; format[tmp]; tmp++) {
        if (format[tmp] == '%') {
            if (format[tmp + 1] == 'c')
                my_putchar(va_arg(mylist, int));
            if (format[tmp + 1] == 's')
                my_putstr(va_arg(mylist, char *));
            if (format[tmp + 1] == 'i' || format[tmp + 1] == 'd')
                my_put_nbr(va_arg(mylist, int));
            tmp++;
        } else
            my_putchar(format[tmp]);
    }
    va_end(mylist);
}
