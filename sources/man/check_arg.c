/*
** EPITECH PROJECT, 2021
** check_arg.c
** File description:
** check_arg fonction
*/

#include "my_function.h"

void man(char *av);
void no_arg(char *av);

int check_arg(int ac, char **av)
{
    if (ac == 1) {
        no_arg(av[0]);
        return (84);
    }
    if (ac == 2 && my_strcmp(av[1], "-h") == 0)
        man(av[0]);
    return (0);
}
