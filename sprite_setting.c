/*
** EPITECH PROJECT, 2021
** sprite_set.c
** File description:
** sprites settings
*/

#include "my.h"

void my_sprite_set(variable_t *o)
{
    sfSprite_setTextureRect(o->back1.sprite, o->back1.rec);
    sfSprite_setTexture(o->back1.sprite, o->back1.texture, sfFalse);
    sfSprite_setTextureRect(o->back2.sprite, o->back2.rec);
    sfSprite_setTexture(o->back2.sprite, o->back2.texture, sfFalse);
    sfSprite_setTextureRect(o->back3.sprite, o->back3.rec);
    sfSprite_setTexture(o->back3.sprite, o->back3.texture, sfFalse);
    sfSprite_setTextureRect(o->player.sprite, o->player.rec);
    sfSprite_setTexture(o->player.sprite, o->player.texture, sfFalse);
    sfSprite_setTextureRect(o->obstacl.sprite, o->obstacl.rec);
    sfSprite_setTexture(o->obstacl.sprite, o->obstacl.texture, sfFalse);
    sfSprite_setPosition(o->back1.sprite, o->back1.pos);
    sfSprite_setPosition(o->back2.sprite, o->back2.pos);
    sfSprite_setPosition(o->back3.sprite, o->back3.pos);
    sfSprite_setPosition(o->player.sprite, o->player.pos);
    sfSprite_setPosition(o->obstacl.sprite, o->obstacl.pos);
}

void my_sprite_set_two(variable_t *o)
{
    sfSprite_setTextureRect(o->back1_2.sprite, o->back1_2.rec);
    sfSprite_setTexture(o->back1_2.sprite, o->back1_2.texture, sfFalse);
    sfSprite_setTextureRect(o->back2_2.sprite, o->back2_2.rec);
    sfSprite_setTexture(o->back2_2.sprite, o->back2_2.texture, sfFalse);
    sfSprite_setTextureRect(o->back3_2.sprite, o->back3_2.rec);
    sfSprite_setTexture(o->back3_2.sprite, o->back3_2.texture, sfFalse);
    sfSprite_setPosition(o->back1_2.sprite, o->back1_2.pos);
    sfSprite_setPosition(o->back2_2.sprite, o->back2_2.pos);
    sfSprite_setPosition(o->back3_2.sprite, o->back3_2.pos);
}

void destroyer(variable_t *o)
{
    sfClock_destroy(o->clock_back.Clock);
    sfClock_destroy(o->clock_jump.Clock);
    sfClock_destroy(o->clock_run.Clock);
    sfClock_destroy(o->clock_obstacl.Clock);
    sfMusic_destroy(o->back_sound);
    sfRenderWindow_destroy(o->window);
}