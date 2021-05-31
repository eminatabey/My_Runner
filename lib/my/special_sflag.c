/*
** EPITECH PROJECT, 2020
** special_sflag.c
** File description:
** special_sflag.c
*/

#include "my.h"
#include <stdio.h>
#include <string.h>

static void octal_ret(int nb)
{
    int x = nb;
    int w = nb;
    int z;
    int return_value = 0;
    int tmp = 0;

    for (z = 0; z <= my_int_len(w); z++) {
        x = nb % 8, nb = nb / 8;
        tmp = tmp + x;
        tmp = tmp * 10;
    }
    while (tmp != 0) {
        return_value = return_value * 10;
        return_value = return_value + tmp % 10;
        tmp = tmp / 10;
    }
    my_put_nbr(return_value);
}

int special_sflag(char const *str)
{
    int x = 0;

    while (str[x] != '\0') {
        if (str[x] == 0)
            my_putstr("\000");
        if (str[x] > 0 && str[x] <= 7) {
            my_putstr("\\00");
            octal_ret(str[x]);
        } if (str[x] > 7 && str[x] < 32) {
            my_putstr("\\0");
            octal_ret(str[x]), x++;
        } if (str[x] == 127) {
            my_putchar('\\');
            octal_ret(str[x]);
        } else
            my_putchar(str[x]);
        x++;
    }
    return 0;
}