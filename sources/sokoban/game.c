/*
** EPITECH PROJECT, 2021
** game.c
** File description:
** moving game
*/

#include <ncurses.h>
#include "struct.h"

pos_t find_pos(char **map)
{
    pos_t position = {0};

    for (int i = 0; map[i]; i++) {
        for (int j = 0; map[i][j]; j++) {
            if (map[i][j] == 'P') {
                position.x = i;
                position.y = j;
            }
        }
    }
    return (position);
}

char **moving_p(char **map, pos_t vector)
{
    pos_t pos = find_pos(map);

    if (map[pos.x + vector.x][pos.y + vector.y] != '#') {
        if (map[pos.x + vector.x][pos.y + vector.y] == 'X') {
            if (map[pos.x + vector.x * 2][pos.y + vector.y * 2] != '#' \
                && map[pos.x + vector.x * 2][pos.y + vector.y * 2] != 'X') {
                map[pos.x][pos.y] = ' ';
                map[pos.x + vector.x][pos.y + vector.y] = 'P';
                map[pos.x + vector.x * 2][pos.y + vector.y * 2] = 'X';
            }
        }
        else {
            map[pos.x][pos.y] = ' ';
            map[pos.x + vector.x][pos.y + vector.y] = 'P';
        }
    }
    return (map);
}

char **left_right(int key, char **map)
{
    pos_t vector = {0};

    if (key == KEY_LEFT) {
        vector.y = -1;
        map = moving_p(map, vector);
    }
    if (key == KEY_RIGHT) {
        vector.y = 1;
        map = moving_p(map, vector);
    }
    return (map);
}

char **game(int key, char **map)
{
    pos_t vector = {0};

    if (key == KEY_UP) {
        vector.x = -1;
        map = moving_p(map, vector);
    }
    if (key == KEY_DOWN) {
        vector.x = 1;
        map = moving_p(map, vector);
    }
    map = left_right(key, map);
    return (map);
}
