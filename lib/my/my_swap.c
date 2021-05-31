/*
** EPITECH PROJECT, 2020
** my_swap.c
** File description:
** my_swap.c
*/

#include <stdio.h>

void my_putchar(char c);

void my_swap(int *a, int *b)
{
    int a_first_value;

    a_first_value = *a;
    *a = *b;
    *b = a_first_value;
}
