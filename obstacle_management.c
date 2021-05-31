/*
** EPITECH PROJECT, 2021
** obstacle
** File description:
** obstacle creator
*/

#include "my.h"

object_t obstacle_create(char *image);

void destroyer(variable_t *o);

int lose_management(variable_t *o, int *score)
{
    if ((o->player.pos.x >= o->obstacl.pos.x &&
    o->player.pos.x <= o->obstacl.pos.x + 230) &&
    (o->player.pos.y >= 500)) {
        my_printf("you score was %d\n", *score);
        destroyer(o);
        return 84;
    }
    return 0;
}

void score_print(variable_t *o, int *score)
{
    sfVector2f text_pos = {400, 100};

    sfText_setString(o->score_text, my_getstr(*score));
    sfText_setPosition(o->score_text, text_pos);
    sfText_setFont(o->score_text, o->score_font);
    sfText_setCharacterSize(o->score_text, 50);
    sfText_setColor(o->score_text, sfRed);
    sfRenderWindow_drawText(o->window, o->score_text, NULL);
}

void obstacle_pos(variable_t *o, int *score)
{
    if (o->clock_obstacl.Secondes < 1.0 && o->clock_obstacl.Secondes > 0.0)
        o->obstacl.pos.x = 850;
    if (o->clock_obstacl.Secondes < 2.0 && o->clock_obstacl.Secondes >= 1.0)
        o->obstacl.pos.x = 700;
    if (o->clock_obstacl.Secondes < 3.0 && o->clock_obstacl.Secondes >= 2.0)
        o->obstacl.pos.x = 550;
    if (o->clock_obstacl.Secondes < 4.0 && o->clock_obstacl.Secondes >= 3.0)
        o->obstacl.pos.x = 400;
    if (o->clock_obstacl.Secondes < 5.0 && o->clock_obstacl.Secondes >= 4.0)
        o->obstacl.pos.x = 250;
    if (o->clock_obstacl.Secondes < 6.0  && o->clock_obstacl.Secondes >= 5.0)
        o->obstacl.pos.x = 100;
    if (o->clock_obstacl.Secondes < 7.0 && o->clock_obstacl.Secondes >= 6.0)
        o->obstacl.pos.x = 0;
    if (o->clock_obstacl.Secondes < 8.0 && o->clock_obstacl.Secondes >= 7.0) {
        o->obstacl.pos.x = 1500;
        *score = *score + 100;
        sfClock_restart(o->clock_obstacl.Clock);
    }
}

int obstacle_management(variable_t *o, int *score)
{
    o->clock_obstacl.Time = sfClock_getElapsedTime(o->clock_obstacl.Clock);
    o->clock_obstacl.Secondes = o->clock_obstacl.Time.microseconds / 100000.0;
    obstacle_pos(o, score);
    if (lose_management(o, score) == 84)
        return 84;
    score_print(o, score);
    return 0;
}