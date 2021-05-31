/*
** EPITECH PROJECT, 2020
** B-PSU-100
** File description:
** stru_special_sflag.c
*/

#include <stdarg.h>
#include "my.h"

void stru_special_sflag(va_list nb)
{
    special_sflag(va_arg(nb, char *));
}