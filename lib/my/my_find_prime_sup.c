/*
** EPITECH PROJECT, 2020
** my_find_prime_sup.c
** File description:
** my_find_prime_sup.c
*/

#include <stdio.h>
#include "my.h"

int my_find_prime_sup(int nb)
{
    int res = 0;
    int prime = nb + 1;

    for (int z = 0; z != 2147483647; z++) {
        res =  my_is_prime(prime);
        if (res == 1)
            return prime;
        else
            prime++;
    }
}
