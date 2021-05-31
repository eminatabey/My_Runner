/*
** EPITECH PROJECT, 2020
** my_strncat.c
** File description:
** my_strncat.c
*/

#include <stdio.h>
#include <unistd.h>

int my_strlen(char const *str)
{
    int x = 0;
    while (str[x] != '\0')
        x++;
    return x;
}

void my_putchar(char c);

char *my_strcat(char *dest, char const *src, int nb)
{
    int dest_len = my_strlen(dest);

    for (int x  = 0; x != my_strlen(src) && x != nb; x++) {
        dest[dest_len] = src[x];
        dest_len++;
    }
    return dest;
}
