/*
** EPITECH PROJECT, 2020
** my_strcmp.c
** File description:
** my_strcmp.c
*/

#include <stdio.h>
#include "my.h"

int my_strlen(char const *str);

int my_strcmp(char const *s1, char const *s2)
{
    int x = 0;

    while ((x != my_strlen(s1)) || (x != my_strlen(s2))) {
        if (s1[x] == s2[x])
            x++;
        else if (s1[x] > s2[x])
            return 1;
        else
            return -1;
    }
    if (s1[x] == s2[x])
        return 0;
}
