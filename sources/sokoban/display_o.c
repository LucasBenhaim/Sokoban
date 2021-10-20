/*
** EPITECH PROJECT, 2021
** display_o.c
** File description:
** display_o fonction
*/

#include <stddef.h>
#include "struct.h"

char **display_o(char **map, storage_t *storage)
{
    for (storage_t *copy = storage; copy != NULL; copy = copy->next) {
        if (map[copy->x][copy->y] == ' ')
            map[copy->x][copy->y] = 'O';
    }
    return (map);
}