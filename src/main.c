/*
** EPITECH PROJECT, 2019
** main
** File description:
** main my_defender
*/

#include "navy.h"

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
<<<<<<< HEAD:src/main.c
    else if (ac != 1) {
        my_printf("Usage : my_defender -h\n");
        return (84);
    } else
        return(my_defender());
    return (0);
=======
    else if (ac != 3) {
        write(2, "USAGE : ./navy PID map_path\n", 28);
        return 84;
    } else
        return(navy(av[1], av[2]));
    return 0;
>>>>>>> d96d0eb48b3cbbd1d47a4f5b0a01cc326059794c:sources/main.c
}
