/*
** EPITECH PROJECT, 2021
** player_actions
** File description:
** player moves
*/

#include "my.h"


static void set_and_print_run(object_t player, sfRenderWindow *window, int x)
{
    player.rec.left = x * 144;
    sfSprite_setTextureRect(player.sprite, player.rec);
    sfRenderWindow_drawSprite(window, player.sprite, NULL);
}

void player_run(variable_t *o)
{
    o->clock_run.Time = sfClock_getElapsedTime(o->clock_run.Clock);
    o->clock_run.Secondes = o->clock_run.Time.microseconds / 100000.0;
    if (o->clock_run.Secondes < 1.0 && o->clock_run.Secondes > 0.0)
        set_and_print_run(o->player, o->window, 0);
    if (o->clock_run.Secondes < 2.0 && o->clock_run.Secondes >= 1.0)
        set_and_print_run(o->player, o->window, 1);
    if (o->clock_run.Secondes < 3.0 && o->clock_run.Secondes >= 2.0)
        set_and_print_run(o->player, o->window, 2);
    if (o->clock_run.Secondes < 4.0 && o->clock_run.Secondes >= 3.0)
        set_and_print_run(o->player, o->window, 3);
    if (o->clock_run.Secondes < 5.0 && o->clock_run.Secondes >= 4.0)
        set_and_print_run(o->player, o->window, 4);
    if (o->clock_run.Secondes < 6.0  && o->clock_run.Secondes >= 5.0)
        set_and_print_run(o->player, o->window, 5);
    if (o->clock_run.Secondes >= 6.0) {
        set_and_print_run(o->player, o->window, 0);
        sfClock_restart(o->clock_run.Clock);
    }
}

int jump_action(variable_t *o)
{
    if (o->clock_jump.Secondes <= 1.0)
        o->player.pos.y = 470;
    if (o->clock_jump.Secondes > 1.0 && o->clock_jump.Secondes < 2.0)
        o->player.pos.y = 440;
    if (o->clock_jump.Secondes >= 2.0 && o->clock_jump.Secondes < 3.0)
        o->player.pos.y = 420;
    if (o->clock_jump.Secondes >= 3.0 && o->clock_jump.Secondes < 4.0)
        o->player.pos.y = 400;
    if (o->clock_jump.Secondes > 4.0 && o->clock_jump.Secondes < 5.0)
        o->player.pos.y = 420;
    if (o->clock_jump.Secondes >= 6.0 && o->clock_jump.Secondes < 7.0)
        o->player.pos.y = 440;
    if (o->clock_jump.Secondes > 7.0 && o->clock_jump.Secondes < 8.0)
        o->player.pos.y = 470;
    if (o->clock_jump.Secondes >= 8.0 && o->clock_jump.Secondes < 9.0)
        o->player.pos.y = 500;
    return 0;
}

void player_jumped(variable_t *o, int *tmp, int x)
{
    if (x == 1) {
        o->clock_jump.Time = sfClock_getElapsedTime(o->clock_jump.Clock);
        o->clock_jump.Secondes = o->clock_jump.Time.microseconds / 50000.0;
        jump_action(o);
        o->player.rec.top = 0;
        o->player.rec.left = 0;
    }
    if (x == 0) {
        o->player.rec.top = 144;
        sfClock_restart(o->clock_jump.Clock);
        *tmp = 0;
    }
}