/*
** EPITECH PROJECT, 2021
** sokoban.h
** File description:
** header for the function used in sokoban
*/

#ifndef SOKOBAN_H
#define SOKOBAN_H

#include "struct.h"

int my_popup(char **map, char **copy);
char *file_to_str(char const *filepath);
char *verify_map(char *str);
char **game(int key, char **map);

#endif
