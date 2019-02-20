/*
** EPITECH PROJECT, 2018
** my_putstr
** File description:
** Write a string
*/

#include "printf.h"

int my_putstr(char const *str)
{
    int i = 0;

    while (str[i]) {
        my_putchar(str[i]);
        i++;
    }
    return (0);
}
