/*
** EPITECH PROJECT, 2021
** verify_map.c
** File description:
** fonction to verify is map is composed only by space X O P #
*/

#include <stddef.h>
#include <stdio.h>

char *enough_box(char *str)
{
    int place = 0;
    int box = 0;

    for (int i = 0; str[i]; i++) {
        if (str[i] == 'O')
            ++place;
        if (str[i] == 'X')
            ++box;
    }
    if (place > box)
        return (NULL);
    return (str);
}

char *verify_map(char *str)
{
    if (str == NULL)
        return (NULL);
    for (int i = 0; str[i]; i++) {
        if (!(str[i] == ' ' || str[i] == 'X' || str[i] == 'O' || 
        str[i] == 'P' || str[i] == '#' || str[i] == '\n'))
            return (NULL);
    }
    str = enough_box(str);
    return (str);
}
