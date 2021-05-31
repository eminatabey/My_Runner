/*
** EPITECH PROJECT, 2020
** stru_binary_print.c
** File description:
** stru_binary_print.c
*/

#include <stdarg.h>
#include "my.h"

void stru_binary_print(va_list nb)
{
    binary_print(va_arg(nb, int));
}
