/*
** EPITECH PROJECT, 2021
** storage_position.c
** File description:
** every position of the O
*/

#include <stdlib.h>
#include <stddef.h>
#include "struct.h"

void add_new_node(storage_t **storage, pos_t pos)
{
    storage_t *new = malloc(sizeof(storage_t));

    new->x = pos.x;
    new->y = pos.y;
    new->next = *storage;
    *storage = new;
}

storage_t *storage_position(char **map)
{
    pos_t pos = {0};
    storage_t *storage = NULL;

    for (int i = 0; map[i]; i++) {
        for (int j = 0; map[i][j]; j++) {
            if (map[i][j] == 'O') {
                pos.x = i;
                pos.y = j;
                add_new_node(&storage, pos);
            }
        }
    }
    return (storage);
}