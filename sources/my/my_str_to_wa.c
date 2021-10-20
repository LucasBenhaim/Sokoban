/*
** EPITECH PROJECT, 2021
** my_str_to_wa.c
** File description:
** take a string an make it **
*/

#include <stdlib.h>
#include <stddef.h>

char *my_strncpy(char *dest, char const *src, int n);

char **my_str_to_word_array(char *str, char lim)
{
    char **arr;
    int arr_sz = 0;
    int str_sz;

    for (int i = 0; str[i] != '\0'; i++)
        if (str[i] == lim)
            arr_sz++;
    arr_sz++;
    arr = malloc(sizeof(char *) * (arr_sz + 2));
    for (int i = 0; i < arr_sz; i++) {
        for (str_sz = 0; str[str_sz] != lim && str[str_sz] != '\0'; str_sz++);
        arr[i] = malloc(sizeof(char) * (str_sz + 1));
        my_strncpy(arr[i], str, str_sz);
        if (i != arr_sz - 1)
            str += str_sz + 1;
    }
    arr[arr_sz] = malloc(sizeof(void *));
    arr[arr_sz] = NULL;
    return arr;
}
