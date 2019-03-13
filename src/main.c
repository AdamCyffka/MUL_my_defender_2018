/*
** EPITECH PROJECT, 2019
** defender
** File description:
** main my_defender
*/

#include "defender.h"

void help(void)
{
    my_printf("TOWER DEFENCE made with CSFML\n");
    my_printf("\n");
    my_printf("USAGE:\n");
    my_printf("ESC for pause and HOW TO PLAY menu.\n");
    my_printf("You can read the How To Play for more information.\n");
    my_printf("DESCRIPTION:");
    my_printf("The maing purpose is to defend the castle by buying towers");
    my_printf("and improving them.\n");
}

int main(int ac, char **av, char **env)
{   
    if (*env == NULL)
        return (84);
    if (ac == 2 && av[1][0] == '-' && av[1][1] == 'h' && av[1][2] == '\0')
        help();
    else if (ac != 1) {
        my_printf("Usage : my_defender -h\n");
        return (84);
    } else
        return(my_defender());
    return (0);
}