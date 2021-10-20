/*
** EPITECH PROJECT, 2021
** my_strcat.c
** File description:
** concatenates 2 strings
*/

#include <stdlib.h>

int my_strlen(char const *str);
char *my_strcpy(char *dest, char const *src);

char *my_strcat(char *dest, char const *src)
{
    char *tmp = malloc(sizeof(char *) * (my_strlen(dest)));
    tmp = my_strcpy(tmp, dest);

    dest = malloc(sizeof(char) * (my_strlen(dest) + my_strlen(src) + 1));
    for (int i = 0, j = 0; i != (my_strlen(tmp) + my_strlen(src));) {
        for (; tmp[j]; j++, i++) {
            dest[i] = tmp[j];
        }
        for (j = 0; src[j]; j++, i++) {
            dest[i] = src[j];
        }
    }
    free(tmp);
    dest[my_strlen(dest)] = '\0';
    return dest;
}
