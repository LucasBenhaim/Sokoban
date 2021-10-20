/*
** EPITECH PROJECT, 2021
** my_strncmp.c
** File description:
** cmp n chara
*/

int my_strncmp(char const *s1, char const *s2, int n)
{
    int i = 0;

    for (; i < n; i++) {
        if (s1[i] != s2[i])
            return (s1[i] - s2[i]);
        if (s1[i] == '\0' || s2[i] == '\0' )
            return (s1[i] - s2[i]);
    }
    return (s1[i] - s2[i]);
}
