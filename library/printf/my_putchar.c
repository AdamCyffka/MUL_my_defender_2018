/*
** EPITECH PROJECT, 2018
** my_putchar
** File description:
** display char
*/

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "printf.h"

void my_putchar(char c)
{
    write(1, &c, 1);
}
