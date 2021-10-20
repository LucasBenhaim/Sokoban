/*
** EPITECH PROJECT, 2021
** my_strcmp.c
** File description:
** cmp two array
*/

int my_strcmp(char const *s1, char const *s2)
{
    int i = 0;

    while (s1[i] == s2[i]) {
        if (s1[i] == 0) {
            i++;
            return (0);
        }
        i++;
    }
    return (s1[i] - s2[i]);
}
