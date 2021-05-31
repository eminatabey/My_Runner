/*
** EPITECH PROJECT, 2020
** my_strncmp.c
** File description:
** my_strncmp.c
*/

#include <stdio.h>

int my_strlen(char const *str);

int my_strncmp(char const *s1, char const *s2, int n)
{
    int x = 0;

    while (x != n && s1[x] != '\0' && s2[x] != '\0') {
        if (s1[x] == s2[x])
            x++;
        else if (s1[x - 1] > s2[x - 1])
            return 1;
        else
            return -1;
    }
    if (my_strlen(s1) > my_strlen(s2))
        return 1;
    else if (my_strlen(s1) < my_strlen(s2))
        return -1;
    else
        return 0;
}
