/*
** EPITECH PROJECT, 2020
** stru_my_putchar.c
** File description:
** stru_my_putchar.c
*/

#include <stdarg.h>
#include "my.h"

void stru_my_putchar(va_list c)
{
    my_putchar(va_arg(c, int));
}