/*
** EPITECH PROJECT, 2020
** csfml_structures
** File description:
** csfml basic structures
*/

#include "my.h"

object_t paralaxe_part2_create(char *image)
{
    object_t obj;
    obj.sprite = sfSprite_create();
    obj.texture = sfTexture_createFromFile(image, NULL);
    obj.pos.x = 900;
    obj.pos.y = 0;
    obj.rec.left = 0;
    obj.rec.top = 0;
    obj.rec.height = 700;
    obj.rec.width = 900;
    return obj;
}

object_t paralaxe_part1_create(char *image)
{
    object_t obj;
    obj.sprite = sfSprite_create();
    obj.texture = sfTexture_createFromFile(image, NULL);
    obj.pos.x = 0;
    obj.pos.y = 0;
    obj.rec.left = 0;
    obj.rec.top = 0;
    obj.rec.height = 700;
    obj.rec.width = 900;
    return obj;
}

object_t player_create(char *image)
{
    object_t obj;
    obj.sprite = sfSprite_create();
    obj.texture = sfTexture_createFromFile(image, NULL);
    obj.pos.x = 0;
    obj.pos.y = 500;
    obj.rec.height = 144;
    obj.rec.left = 0;
    obj.rec.top = 144;
    obj.rec.width = 144;
    return obj;
}

object_t obstacle_create(char *image)
{
    object_t obj;

    obj.sprite = sfSprite_create();
    obj.texture = sfTexture_createFromFile(image, NULL);
    obj.pos.x = 1500;
    obj.pos.y = 550;
    obj.rec.height = 110;
    obj.rec.left = 0;
    obj.rec.top = 0;
    obj.rec.width = 110;
    return obj;
}

variable_t variables(void)
{
    variable_t obj;
    sfVideoMode mode = {900, 700, 32};
    obj.style = sfTitlebar | sfClose | sfResize;
    obj.window = sfRenderWindow_create(mode , "my_run", obj.style, NULL);
    obj.back1 = paralaxe_part1_create("images/first_plan.png");
    obj.back1_2 = paralaxe_part2_create("images/first_plan.png");
    obj.back2 = paralaxe_part1_create("images/rocks_2.2.png");
    obj.back2_2 = paralaxe_part2_create("images/rocks_2.2.png");
    obj.back3 = paralaxe_part1_create("images/sky2.png");
    obj.back3_2 = paralaxe_part2_create("images/sky2.png");
    obj.player = player_create("images/character.png");
    obj.obstacl = obstacle_create("images/spikes.png");
    obj.clock_back.Clock = sfClock_create();
    obj.clock_jump.Clock = sfClock_create();
    obj.clock_run.Clock = sfClock_create();
    obj.clock_obstacl.Clock = sfClock_create();
    obj.back_sound = sfMusic_createFromFile("game_sound.ogg");
    obj.score_font = sfFont_createFromFile("pixel.ttf");
    obj.score_text = sfText_create();
    return obj;
}