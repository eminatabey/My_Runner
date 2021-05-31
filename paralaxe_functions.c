/*
** EPITECH PROJECT, 2021
** header paralaxe
** File description:
** paralaxe functions
*/

#include "my.h"

void paralaxe_movement(float *back1, float *back1_2, int x)
{
    if (x == 1) {
        *back1 = *back1 - 10;
        *back1_2 = *back1_2 - 10;
    }
    if (x == 0) {
        *back1 = *back1 - 3;
        *back1_2 = *back1_2 - 3;
    }
    if (x == 2)
    {
        *back1 = *back1 - 0.5;
        *back1_2 = *back1_2 - 0.5;
    }
}

void paralaxe_condition(float *back1_2, float *back1)
{
    if (*back1_2 == 0) {
        *back1_2 = 900;
        *back1 = 0;
    }
}

void paralaxe(variable_t *o)
{
    paralaxe_movement(&o->back1.pos.x, &o->back1_2.pos.x, 1);
    paralaxe_movement(&o->back2.pos.x, &o->back2_2.pos.x, 0);
    paralaxe_movement(&o->back3.pos.x, &o->back3_2.pos.x, 2);
    sfClock_restart(o->clock_back.Clock);
}