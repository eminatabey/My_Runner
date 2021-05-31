/*
** EPITECH PROJECT, 2020
** my_int_len.c
** File description:
** my_int_len.c
*/

int my_int_len(int nb)
{
    int x = 0;

    while (nb != 0) {
        nb = nb / 10;
        x++;
    }
    return x;
}
