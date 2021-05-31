/*
** EPITECH PROJECT, 2020
** my_getstr.c
** File description:
** my_getstr.c
*/

#include <stdlib.h>
#include "my.h"
#include <stdio.h>

char *my_getstr(int n)
{
    int len = 0;
    char *str;
    int tmp = n;

    while (tmp > 0) {
        tmp /= 10;
        len++;
        }
    str = malloc(sizeof(*str) * (len + 1));
    str[len] = '\0';
    while (len--) {
        str[len] = n % 10  + '0';
        n /= 10;
    }
    return (str);
}