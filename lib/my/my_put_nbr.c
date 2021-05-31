/*
** EPITECH PROJECT, 2020
** my_put_nbr.c
** File description:
** my_put_nbr.c
*/

#include "my.h"
#include <stdio.h>

int my_put_nbr(int nb)
{
    int return_value;
    int x = nb;

    if (nb == -2147483648) {
        nb = nb / 10;
    }
    if (nb < 0) {
        my_putchar('-');
        nb = nb * (-1);
    }

    if (nb >= 10) {
        my_put_nbr(nb / 10);
    }
    return_value = nb % 10 + '0';
    my_putchar(return_value);
    if (x == -2147483648 && return_value == 52)
        my_putchar(56);
}
