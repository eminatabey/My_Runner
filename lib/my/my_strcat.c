/*
** EPITECH PROJECT, 2020
** my_strcat.c
** File description:
** my_strcat.c
*/

#include <stdio.h>
#include "my.h"

char *my_strcat(char *dest, char const *src)
{
    int dest_len = my_strlen(dest);

    for (int x  = 0; x != my_strlen(src); x++) {
        dest[dest_len] = src[x];
        dest_len++;
    }
    return dest;
}
