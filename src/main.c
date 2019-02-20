/*
** EPITECH PROJECT, 2019
** main
** File description:
** main my_defender
*/

#include "defender.h"

void help(void)
{
    my_printf("TOWER DEFENCE made with CSFML\n");
    my_printf("\n");
    my_printf("USAGE:\n");
    my_printf("\n");
    my_printf("\n");
    my_printf("You can read the How To Play for more information.\n");
}

int main(int ac, char **av)
{
    if (ac == 2 && av[1][0] == '-' && av[1][1] == 'h' && av[1][2] == '\0')
        help();
    else if (ac != 1) {
        write(2, "Usage : my_defender -h\n", 23);
        return (84);
    } else
        return(my_defender());
    return (0);
}
