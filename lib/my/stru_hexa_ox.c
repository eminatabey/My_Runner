/*
** EPITECH PROJECT, 2020
** stru_hexa_ox.c
** File description:
** stru_hexa_ox.c
*/

#include <stdarg.h>
#include "my.h"

void stru_hexa_ox(va_list nb)
{
    my_putstr("0x");
    hexa_print_lower(va_arg(nb, int));
}