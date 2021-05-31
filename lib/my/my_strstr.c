/*
** EPITECH PROJECT, 2020
** my_strstr.c
** File description:
** my_strstr.c
*/

#include <stdio.h>

int my_strlen(char const *str)
{
    int x = 0;
    while (str[x] != '\0')
        x++;
    return x;
}

char *my_strstr(char *str, char const *to_find)
{
    int x = 0;
    int len = 0;

    while (len != my_strlen(str)) {
        while (to_find[x] != str[len]) {
            len++;
        }
        while (to_find[x] == str[len] && len <= my_strlen(str)) {
            len++;
            x++;
        }
        if (x == my_strlen(to_find) && len <= my_strlen(str))
            return &str[len - x];
        else if (x != my_strlen(to_find) && len > my_strlen(str))
            return NULL;
        else
            x = 0;
    }
}
