/*
** EPITECH PROJECT, 2020
** binary_print.c
** File description:
** binary_print.c
*/

#include <stdio.h>
#include "my.h"

void binary_print(int nb)
{
    char str[my_int_len(nb)];
    int x = nb;
    int z = 0;
    int w = nb;
    int a = 0;

    for (z = 0; z <= my_int_len(w) + 19; z++) {
        x = nb % 2;
        nb = nb / 2;
        str[z] = x + '0';
    }
    str[z] = '\0';
    if (w == 0)
        my_putstr(str);
    for (a = z - 1; str[a] == '0'; a--);
    str[a + 1] = '\0';
    my_revstr(str);
    my_putstr(str);
}