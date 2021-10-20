/*
** EPITECH PROJECT, 2021
** struct.h
** File description:
** struct for sokoban
*/

#ifndef STRUCT_H
#define STRUCT_H

typedef struct position_s {
    int x;
    int y;
} pos_t;

typedef struct storage_s {
    int x;
    int y;
    struct storage_s *next;
} storage_t;

#endif
