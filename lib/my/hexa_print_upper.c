/*
** EPITECH PROJECT, 2020
** hexa_print_upper.c
** File description:
** hexa_print_upper.c
*/

#include <stdio.h>
#include "my.h"

void hexa_print_upper(int nb)
{
    char str[my_int_len(nb)];
    int x = nb;
    int z = 0;
    int w = nb;
    int a = 0;

    for (z = 0; z <= my_int_len(w); z++) {
        x = nb % 16, nb = nb / 16;
        if (x > 9)
            str[z] = x + 55;
        else
            str[z] = x + '0';
    }
    str[z] = '\0';
    if (w == 0)
        my_putstr(str);
    for (a = z - 1; str[a] == '0'; a--);
    str[a + 1] = '\0';
    my_revstr(str), my_putstr(str);
}
