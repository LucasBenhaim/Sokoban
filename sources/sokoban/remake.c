/*
** EPITECH PROJECT, 2021
** remake.c
** File description:
** remake fonction
*/

#include "my_function.h"

char **remake(char **map, char **copy)
{
    for (int i = 0; copy[i]; i++)
        my_strcpy(map[i], copy[i]);
    return (map);
}
