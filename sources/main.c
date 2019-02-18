/*
** EPITECH PROJECT, 2018
** main
** File description:
** main my_hunter
*/

#include "../include/my.h"

void help(void)
{
    my_putstr("DUCK HUNT\n");
    my_putstr("\n");
    my_putstr("HOW TO PLAY ?\n");
    my_putstr("     1) Run : execute ./my_hunter to play\n");
    my_putstr("     2) Play : right click to kill a duck\n");
    my_putstr("     3) Exit : press ESCAPE to leave the game\n");
}

int main(int ac, char **av)
{
    if (ac == 2 && av[1][0] == '-' && av[1][1] == 'h') {
        help();
        return (0);
    } if (ac != 1) {
        return (84);
    } else
        my_hunter();
    return (0);
}