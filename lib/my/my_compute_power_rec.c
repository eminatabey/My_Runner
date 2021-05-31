/*
** EPITECH PROJECT, 2020
** my_compute_power_rec.c
** File description:
** my_compute_power_rec.c
*/

int my_compute_power_rec(int nb, int power)
{

    if (power < 0) {
        nb = 0;
        return nb;
    }
    else if (power == 0) {
        nb = 1;
        return nb;
    }
    else if (power == 1) {
        return nb;
    }
    if (power != 1) {
        nb = nb * my_compute_power_rec(nb, power - 1);
    }
    if (power == 1) {
        return nb;
    }
}
