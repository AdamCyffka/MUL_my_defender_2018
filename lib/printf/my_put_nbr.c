/*
** EPITECH PROJECT, 2018
** my_put_nbr
** File description:
** Display a int
*/

#include <unistd.h>
#include "printf.h"

int my_put_nbr(int nb)
{
    if (nb > 9)
        my_put_nbr(nb / 10);
    else if (nb < 0)
    {
        nb = nb * -1;
        write(1, "-", 1);
        if (nb > 9)
            my_put_nbr(nb / 10);
    }
    my_putchar(nb % 10 + '0');
}
