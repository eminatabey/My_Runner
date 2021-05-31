/*
** EPITECH PROJECT, 2020
** my_strupercase.c
** File description:
** my_strupercase.c
*/
#include <stdio.h>

char *my_strupercase(char *str)
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
        if (str[x] >= 97 && str[x] <= 122)
            str[x] = str[x] - 32;
        else
            str[x] = str[x];
        x++;
    }
    return str;
}
