/*
** EPITECH PROJECT, 2020
** my.h
** File description:
** my.h
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

#ifndef MY_H_
#define MY_H_

void hexa_print_upper(int nb);
void hexa_print_lower(int nb);
int my_int_len(int nb);
int my_printf(char const *str, ...);
char *my_getstr(int n);
char *my_str_special_cpy(char *dest, char const *src, int n);
int my_str_array_len(char const *str);
int my_compute_power_rec(int nb, int power);
int my_compute_square_root(int nb);
int my_find_prime_sup(int nb);
int my_getnbr(char const *str);
int my_isneg(int n);
int my_is_prime(int nb);
void my_putchar(char c);
int my_put_nbr(int nb);
int my_putstr(char const *str);
char *my_revstr(char *str);
int my_showmem(char const *str, int size);
int my_showstr(char const *str);
void my_sort_int_array(int *array, int size);
char *all_lowercase(char *str);
char *my_strcapitalize(char *str);
char *my_strcat(char *dest, char const *src);
int my_strcmp(char const *s1, char const *s2);
char *my_strcpy(char *dest, char const *src);
int my_str_isalpha(char const *str);
int my_str_islower(char const *str);
int my_str_isnum(char const *str);
int my_str_isprintable(char const *str);
int my_str_isupper(char const *str);
int my_strlen(char const *str);
char *my_strlowercase(char *str);
char *my_strncat(char *dest, char const *src, int nb);
int my_strncmp(char const *s1, char const *s2, int nb);
char *my_strncpy(char *dest, char const *src, int n);
char *my_strstr(char *str, char const *to_find);
char *my_strupercase(char *str);
void my_swap(int *a, int *b);
void put_unsigned(int nb);
void octal_print(int nb);
void binary_print(int nb);
void stru_my_put_nbr(va_list nb);
void stru_my_putchar(va_list c);
void stru_my_putstr(va_list str);
void stru_hexa_print_lower(va_list nb);
void stru_hexa_print_upper(va_list nb);
void stru_octal_print(va_list nb);
void stru_binary_print(va_list nb);
void stru_put_unsigned(va_list nb);
int special_sflag(char const *str);
void stru_special_sflag(va_list nb);
void stru_hexa_ox(va_list nb);
void stru_put_unsigned(va_list nb);

typedef struct   s_func
{
    void (*pt)(va_list);
    char next;
} flag_t_func;

static flag_t_func const g_tab[12] =
{{&stru_my_put_nbr, 'd'}, {&stru_my_put_nbr, 'i'}, {&stru_my_putchar, 'c'},
{&stru_my_putstr, 's'}, {&stru_hexa_print_lower, 'x'},
{&stru_hexa_print_upper, 'X'}, {&stru_octal_print, 'o'},
{&stru_binary_print, 'b'}, {&stru_put_unsigned, 'u'},
{&stru_special_sflag, 'S'}, {&stru_hexa_ox, 'p'}, {NULL, -1}};

typedef struct object_s
{
    sfSprite *sprite;
    sfIntRect rec;
    sfTexture *texture;
    sfVector2f pos;
} object_t;

typedef struct my_clock_s
{
    sfClock *Clock;
    sfTime Time;
    float Secondes;
} my_clock_t;

typedef struct variable_s
{
    sfUint32 style;
    sfRenderWindow *window;
    object_t back1;
    object_t back1_2;
    object_t back2;
    object_t back2_2;
    object_t back3;
    object_t back3_2;
    object_t player;
    object_t obstacl;
    my_clock_t clock_back;
    my_clock_t clock_run;
    my_clock_t clock_jump;
    my_clock_t clock_obstacl;
    sfEvent event;
    sfMusic *back_sound;
    sfFont *score_font;
    sfText *score_text;
} variable_t;

#endif /* MY_H_ */
