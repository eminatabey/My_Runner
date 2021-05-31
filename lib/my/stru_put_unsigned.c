/*
** EPITECH PROJECT, 2020
** stru_put_unsigned.c
** File description:
** stru_put_unsigned.c
*/

#include "my.h"
#include <stdarg.h>

void stru_put_unsigned(va_list nb)
{
    put_unsigned(va_arg(nb, int));
}
