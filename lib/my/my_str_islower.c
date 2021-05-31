/*
** EPITECH PROJECT, 2020
** my_str_islower.c
** File description:
** my_str_islower.c
*/

#include <stdio.h>

int my_str_islower(char const *str)
{
    int count = 0;

    for (int x = 0; str[x] != '\0'; x++) {
        if (str[x] > 'z' || str[x] < 'a')
            count++;
    }
    if (count == 0)
        return 1;
    else
        return 0;
}
