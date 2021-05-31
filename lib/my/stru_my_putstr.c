/*
** EPITECH PROJECT, 2020
** stru_my_putstr.c
** File description:
** stru_my_putstr.c
*/

#include <stdarg.h>
#include "my.h"

void stru_my_putstr(va_list str)
{
    my_putstr(va_arg(str, char *));
}
