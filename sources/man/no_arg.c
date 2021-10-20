/*
** EPITECH PROJECT, 2021
** no_arg.c
** File description:
** no_arg fonction
*/

#include "printf.h"

void no_arg(char *av)
{
    my_printf("%s: bad arguments: 0 given but 1 is required\n", av);
    my_printf("retry with -h\n");
}
