/*
** EPITECH PROJECT, 2021
** my_strncpy.c
** File description:
** copy n chara in dest
*/

char *my_strncpy(char *dest, char const *src, int n)
{
    int i = 0;

    for (i = 0; i != n; i++)
        dest[i] = src[i];
    dest[i] = '\0';
    return (dest);
}
