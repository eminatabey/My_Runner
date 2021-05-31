/*
** EPITECH PROJECT, 2020
** stru_octal_print.c
** File description:
** stru_octal_print.c
*/

#include <stdarg.h>
#include "my.h"

void stru_octal_print(va_list nb)
{
    octal_print(va_arg(nb, int));
}
