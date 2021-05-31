/*
** EPITECH PROJECT, 2020
** my_str_isprintable.c
** File description:
** my_str_isprintable.c
*/

#include <stdio.h>

int my_str_isprintable(char const *str)
{
    int count = 0;

    for (int x = 0; str[x] != '\0'; x++) {
        if (str[x] < 32)
            count++;
    }
    if (count == 0)
        return 1;
    else
        return 0;
}
