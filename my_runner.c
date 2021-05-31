/*
** EPITECH PROJECT, 2020
** epitech header
** File description:
** paralaxe
*/

#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <SFML/Audio.h>
#include <stdarg.h>
#include <string.h>
#include <unistd.h>
#include "my.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

void my_sprite_set(variable_t *o);

void my_sprite_set_two(variable_t *o);

object_t player_create(char *image);

object_t paralaxe_part1_create(char *image);

object_t paralaxe_part2_create(char *image);

object_t obstacle_create(char *image);

variable_t variables(void);

int jump_action(variable_t *o);

void player_run(variable_t *o);

int paralaxe_movement(float *back1, float *back1_2, int x);

void paralaxe_condition(float *back1_2, float *back1);

void player_jumped(variable_t *o, int *tmp, int x);

void event_management(variable_t *o, int *tmp);

void destroyer(variable_t *o);

void function_contractor(variable_t *o);

int obstacle_management(variable_t *o, int *score);

void paralaxe(variable_t *o);

int draw_sprites(variable_t *o)
{
    sfRenderWindow_drawSprite(o->window, o->back3.sprite, NULL);
    sfRenderWindow_drawSprite(o->window, o->back3_2.sprite, NULL);
    sfRenderWindow_drawSprite(o->window, o->back2.sprite, NULL);
    sfRenderWindow_drawSprite(o->window, o->back2_2.sprite, NULL);
    sfRenderWindow_drawSprite(o->window, o->back1.sprite, NULL);
    sfRenderWindow_drawSprite(o->window, o->back1_2.sprite, NULL);
    sfRenderWindow_drawSprite(o->window, o->obstacl.sprite, NULL);
    return 0;
}

void help_print(void)
{
    my_putstr("do you need help?\nhow do you launch the game?\n");
    my_putstr(" - ./my_runner -h for help\n - ./my_runner -i");
    my_putstr(" for launch\nCommandes:\n - Left and right arrow to move");
    my_putstr("\n - Up to jump.\n");
    my_putstr("your map must contain 10 obstacles\n");
    my_putstr(" Good luck and have fun!\n");
}

int condition (int ac, char **av, sfMusic *sound, sfRenderWindow *window)
{
    if (ac != 2) {
        sfMusic_destroy(sound);
        sfRenderWindow_destroy(window);
        return 84;
    }
    if (av[1][0] == '-' && av[1][1] == 'h') {
        help_print();
        sfMusic_destroy(sound);
        sfRenderWindow_destroy(window);
        return 84;
    }
    if (av[1][0] != '-' || av[1][1] != 'i') {
        sfMusic_destroy(sound);
        sfRenderWindow_destroy(window);
        return 84;
    }
    sfMusic_play(sound);
    return 0;
}

int gamestart(variable_t *o, int tmp, int x, int *score)
{
    while (sfRenderWindow_isOpen(o->window)) {
        my_sprite_set(o);
        my_sprite_set_two(o);
        o->clock_back.Time = sfClock_getElapsedTime(o->clock_back.Clock);
        o->clock_back.Secondes = o->clock_back.Time.microseconds / 10000.0;
        sfRenderWindow_display(o->window);
        while (sfRenderWindow_pollEvent(o->window, &o->event))
            event_management(o, &tmp);
        if (tmp == 1)
            player_jumped(o, &tmp, 1);
        if (o->clock_jump.Secondes > 9.0)
            player_jumped(o, &tmp, 0);
        if (o->clock_back.Secondes > 1.0)
            paralaxe(o);
        function_contractor(o);
        if (obstacle_management(o, score) == 84)
            return 84;
    } destroyer(o);
    return 0;
}

int main(int ac, char **av)
{
    variable_t *object = malloc(sizeof(variable_t));
    *object = variables();
    int tmp = 0;
    int x = 0;
    int score;

    if (condition(ac, av, object->back_sound, object->window) == 84)
        return 84;
    gamestart(object, tmp, x, &score);
    return 0;
}