/*
** EPITECH PROJECT, 2021
** man.c
** File description:
** man fonction
*/

#include "printf.h"

void man(char *av)
{
    my_printf("USAGE\n");
    my_printf("     %s map\n", av);
    my_printf("DESCRIPTION\n");
    my_printf("     map  file representing the warehouse map, ");
    my_printf("containing '#' for walls, ");
    my_printf("'P' for the player, ");
    my_printf("'X' for boxes and 'O' for storage locations.\n");
}
