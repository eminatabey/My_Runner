/*
** EPITECH PROJECT, 2020
** my_strlowercase.c
** File description:
** my_strlowercase.c
*/

#include <stdio.h>

char *my_strlowercase(char *str)
{
    int x = 0;
    int y = 0;

    while (str[y] != '\0') {
        if ((str[y] >= 97 && str[y] <= 122) || (str[y] <= 90 && str[y] >= 65))
            y++;
        else
            return str;
    }
    while (str[x] != '\0') {
        if (str[x] >= 65 && str[x] <= 90)
            str[x] = str[x] + 32;
        else
            str[x] = str[x];
        x++;
    }
    return str;
}
