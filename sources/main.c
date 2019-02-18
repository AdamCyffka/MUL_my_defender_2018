/*
** EPITECH PROJECT, 2018
** main.c
** File description:
** main for my_runner
*/

#include "../include/my.h"

void help(void)
{
    write(1, "Infinite runner\n", 16);
    write(1, "\n", 1);
    write(1, "USAGE\n", 6);
    write(1, "   ./my_runner map.txt\n", 23);
    write(1, "\n", 1);
    write(1, "   -i : launch the game in infinity mode\n", 41);
    write(1, "   -h : print the usage\n", 24);
    write(1, "\n", 1);
    write(1, "USER INTERACTIONS\n", 18);
    write(1, "   SPACE : jump\n", 16);
}

int main(int ac, char **av)
{
    if (ac == 2 && av[1][0] == '-' && av[1][1] == 'i') {
        write(1, "Oups, i didn't did it\n", 22);
        return (0);
    } if (ac == 2 && av[1][0] == '-' && av[1][1] == 'h') {
        help();
        return (0);
    } else if (ac >= 2) {
        write(2, "Type './my_runner -h' for help\n", 31);
        return (84);
    } else
        my_runner();
    return (0);
}