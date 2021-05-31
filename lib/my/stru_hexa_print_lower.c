/*
** EPITECH PROJECT, 2020
** stru_hexa_print_lower.c
** File description:
** stru_hexa_print_lower.c
*/

#include <stdarg.h>
#include "my.h"

void stru_hexa_print_lower(va_list nb)
{
    hexa_print_lower(va_arg(nb, int));
}
