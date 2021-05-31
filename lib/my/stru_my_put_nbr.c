/*
** EPITECH PROJECT, 2020
** stru_my_put_nbr.c
** File description:
** stru_my_put_nbr.c
*/

#include "my.h"
#include <stdarg.h>
#include <stdio.h>

void stru_my_put_nbr(va_list nb)
{
    my_put_nbr(va_arg(nb, int));
}
