/*
** EPITECH PROJECT, 2020
** stru_hexa_print_upper.c
** File description:
** stru_hexa_print_upper.c
*/

#include <stdarg.h>
#include "my.h"

void stru_hexa_print_upper(va_list nb)
{
    hexa_print_upper(va_arg(nb, int));
}
