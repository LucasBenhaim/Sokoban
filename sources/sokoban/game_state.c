/*
** EPITECH PROJECT, 2021
** game_state.c
** File description:
** game_state fonction
*/

#include <stddef.h>
#include "struct.h"

int count_box(char **map)
{
    int nb_box = 0;

    for (int i = 0; map[i]; i++) {
        for (int j = 0; map[i][j]; j++) {
            if (map[i][j] == 'X')
                nb_box++;
        }
    }
    return (nb_box);
}

int x_is_blocked(char **map, int i, int j)
{
    if ((map[i - 1][j] == '#' || map[i - 1][j] == 'X') \
    && (map[i][j + 1] == '#' || map[i][j + 1] == 'X'))
        return (1);
    if ((map[i - 1][j] == '#' || map[i - 1][j] == 'X') \
    && (map[i][j - 1] == '#' || map[i][j - 1] == 'X'))
        return (1);
    if ((map[i + 1][j] == '#' || map[i + 1][j] == 'X') \
    && (map[i][j + 1] == '#' || map[i][j + 1] == 'X'))
        return (1);
    if ((map[i + 1][j] == '#' || map[i + 1][j] == 'X') \
    && (map[i][j - 1] == '#' || map[i][j - 1] == 'X'))
        return (1);
    return (0);
}

int box_cant_move(char **map)
{
    int block = 0;
    int nb_box = count_box(map);

    for (int i = 0; map[i]; i++) {
        for (int j = 0; map[i][j]; j++) {
            if (map[i][j] == 'X')
                block += x_is_blocked(map, i, j);
        }
    }
    if (nb_box == block)
        return (1);
    return (0);
}

int game_state(char **map, storage_t *storage)
{
    int nb_of_o = 0;
    int nb_of_x = 0;

    for (storage_t *copy = storage; copy != NULL; copy = copy->next) {
        nb_of_o++;
        if (map[copy->x][copy->y] == 'X')
            nb_of_x++;
    }
    if (nb_of_o == nb_of_x)
        return (0);
    if (box_cant_move(map) == 1)
        return (1);
    return (2);
}