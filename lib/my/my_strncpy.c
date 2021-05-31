/*
** EPITECH PROJECT, 2020
** my_strncpy.c
** File description:
** my_strncpy.c
*/

#include <stdio.h>

int my_strlen(char const *str);

char * my_strncpy(char *dest, char const *src, int n)
{
    int x = 0;

    while (x != n) {
        dest[x] = src[x];
        x++;
    }
    if (my_strlen(dest) < n)
        dest[x] = '\0';
    return dest;
}
