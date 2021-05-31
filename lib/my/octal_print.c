/*
** EPITECH PROJECT, 2020
** octal_print.c
** File description:
** octal_print.c
*/

#include <stdio.h>
#include "my.h"

void octal_print(int nb)
{
    char str[my_int_len(nb)];
    int x = nb;
    int z = 0;
    int w = nb;
    int a = 0;

    for (z = 0; z <= my_int_len(w); z++) {
        x = nb % 8, nb = nb / 8;
        str[z] = x + '0';
    }
    str[z] = '\0';
    if (w == 0)
        my_putstr(str);
    for (a = z - 1; str[a] == '0'; a--);
    str[a + 1] = '\0';
    my_revstr(str), my_putstr(str);
}
