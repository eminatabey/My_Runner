/*
** EPITECH PROJECT, 2020
** my_printf_reduced.c
** File description:
** my_printf_reduced.c
*/

#include "my.h"
#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <unistd.h>

int compute_fun_arr(char const *str, va_list argptr, int x, int len)
{
    int i = 0;

    for (; g_tab[i].next != -1; i++) {
        if (str[x] == '%')
            break;
        if (g_tab[i].next == str[x]) {
            (g_tab[i].pt(argptr));
            break;
        }
    }
    if (g_tab[i].next == -1) {
        my_putchar('%');
        my_putchar(str[x]);
        len = len + 2;
    }
    return len;
}

int percent_and_hastag_condition(char const *str, int x)
{
    if (str[x] == ' ') {
        my_putchar(' ');
        while (str[x] == ' ')
            x++;
    }
    if (str[x] == '#' || str[x] == '0') {
        while (str[x] == '#' || str[x] == '0')
            x++;
    }
    if (str[x] == '%')
        my_putchar('%');
    return x;
}

int my_printf(char const *str, ...)
{
    va_list argptr;
    int len = my_strlen(str);

    va_start(argptr, str);
    for (int x = 0; str[x] != '\0'; x++) {
        if (str[x] != '%')
            my_putchar(str[x]);
        else {
            x++;
            x = percent_and_hastag_condition(str, x);
            len = len + compute_fun_arr(str, argptr, x, len);
            len--;
        }
    }
    va_end(argptr);
    return len;
}
