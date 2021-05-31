/*
** EPITECH PROJECT, 2020
** my_sort_int_array.c
** File description:
** my_sort_int_array.c
*/

#include "my.h"

void my_swap(int *a, int *b);

void my_sort_int_array(int *str, int size)
{
    for (int x = 0; x != size; x++) {
        for (int z = 0; z != size - 1; z++) {
            if (str[z] > str[z + 1])
                my_swap(&str[z], &str[z + 1]);
        }
    }
}
