/*
** EPITECH PROJECT, 2020
** my_is_prime.c
** File description:
** my_is_prime.c
*/

#include <stdio.h>

int my_is_prime(int nb)
{
    int x = nb - 1;
    int res = 0;

    if (nb < 2) {
        return 0;
    }
    while (x != 1) {
        res = nb % x;
        if (res != 0) {
            x--;
            if (x == 1)
                return 1;
        }
        if ((x != 0) && (res == 0))
            return 0;
    }
}
