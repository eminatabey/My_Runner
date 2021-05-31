/*
** EPITECH PROJECT, 2021
** event
** File description:
** event gestion
*/

#include "my.h"

int draw_sprites(variable_t *o);

void paralaxe_condition(float *back1_2, float *back1);

void player_run(variable_t *o);

void event_management(variable_t *o, int *tmp)
{
    if (o->event.key.code == sfKeyRight)
        o->player.pos.x = o->player.pos.x + 20;
    if (o->event.key.code == sfKeyLeft)
        o->player.pos.x = o->player.pos.x - 20;
    if (o->event.key.code == sfKeyUp)
        *tmp = 1;
    if (o->event.type == sfEvtClosed) {
        sfRenderWindow_close(o->window);
    }
}

void function_contractor(variable_t *o)
{
    paralaxe_condition(&o->back1_2.pos.x, &o->back1.pos.x);
    paralaxe_condition(&o->back2_2.pos.x, &o->back2.pos.x);
    paralaxe_condition(&o->back3_2.pos.x, &o->back3.pos.x);
    draw_sprites(o);
    player_run(o);
}