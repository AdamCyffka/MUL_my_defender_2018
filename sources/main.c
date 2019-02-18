/*
** EPITECH PROJECT, 2019
** main
** File description:
** main my_defender
*/

void help(void)
{
    my_putstr("\n");
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
        my_defender();
    return (0);
}