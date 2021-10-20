/*
** EPITECH PROJECT, 2021
** my_popup.c
** File description:
** display a string given as parameter
*/

#include <ncurses.h>
#include "struct.h"

char **game(int key, char **map);
void print_map(char **map);
storage_t *storage_position(char **map);
char **display_o(char **map, storage_t *storage);
int game_state(char **map, storage_t *storage);
char **remake(char **map, char **copy);

int my_popup(char **map, char **copy)
{
    int key = 0;
    int state = 2;
    storage_t *storage = storage_position(map);

    initscr();
    noecho();
    keypad(stdscr, TRUE);
    while (state == 2) {
        map = game(key, map);
        map = display_o(map, storage);
        print_map(map);
        state = game_state(map, storage);
        if (state == 1 || state == 0)
            break;
        key = getch();
        if (key == ' ')
            map = remake(map, copy);
    }
    endwin();
    return (state);
}