/*
** EPITECH PROJECT, 2020
** my_str_isalpha.c
** File description:
** my_str_isalpha.c
*/

#include <stdio.h>

int my_str_isalpha(char const *str)
{
    int x = 0;

    while (str[x] != '\0') {
        if ((str[x] >= 'a' && str[x] <= 'z') ||
            (str[x] >= 'A' && str[x] <= 'Z'))
            x++;
        else
            return 0;
    }
    return 1;
}
