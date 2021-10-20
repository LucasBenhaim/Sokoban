/*
** EPITECH PROJECT, 2021
** print_map.c
** File description:
** fonction to print a char **
*/

#include <ncurses.h>
#include "my_function.h"
#include "struct.h"

void print_map(char **map)
{
    int size = 0;
    pos_t pos = {0};

    for (; map[size]; size++);
    clear();
    getmaxyx(stdscr, pos.y, pos.x);
    for (int i = 0; map[i]; i++) {
        mvprintw((pos.y / 2) - size, 
        (pos.x - my_strlen(map[i])) / 2, "%s", map[i]);
        size--;
    }
    refresh();
}
