/*
** EPITECH PROJECT, 2019
** main
** File description:
** main my_defender
*/

#include "navy.h"

void help(void)
{
    my_printf("\n");
    my_printf("\n");
    my_printf("HOW TO PLAY ?\n");
    my_printf("     1) Run : execute ./my_hunter to play\n");
    my_printf("     2) Play : right click to kill a duck\n");
    my_printf("     3) Exit : press ESCAPE to leave the game\n");
}

int main(int ac, char **av)
{
    if (ac == 2 && av[1][0] == '-' && av[1][1] == 'h' && av[1][2] == '\0')
        help();
    else if (ac != 3) {
        write(2, "USAGE : ./navy PID map_path\n", 28);
        return 84;
    } else
        return(navy(av[1], av[2]));
    return 0;
}
