/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** main for minishell01
*/

#include <stdio.h>
#include <stddef.h>
#include "arguments.h"
#include "my_function.h"
#include "sokoban.h"

int main(int ac, char **av)
{
    char *str = NULL;
    char **map = NULL;
    char **copy = NULL;
    int info = 0;

    check_arg(ac, av);
    if (ac == 2 && av[1][0] != '-') {
        str = verify_map(file_to_str(av[1]));
        if (str == NULL)
            return (84);
        map = my_str_to_word_array(str, '\n');
        copy = my_str_to_word_array(str, '\n');
        info = my_popup(map, copy);
        if (info == 84)
            return (84);
    }
    else
        return (84);
    return (info);
}
