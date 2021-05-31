/*
** EPITECH PROJECT, 2020
** my_strcapitalize.c
** File description:
** my_strcapitalize.c
*/

#include <stdio.h>

int my_strlen(char const *str);

char *all_lowercase(char *str)
{
    if (str[0] >= 'a' && str[0] <= 'z')
        str[0] = str[0] - 32;
    for (int i = 1; str[i] != '\0'; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] = str[i] + 32;
    }
    return str;
}

char *my_strcapitalize(char *str)
{
    int x = 0;

    str = all_lowercase(str);
    while (str[x] != '\0') {
        if ((str[x] < 'a' || str[x] > 'z') &&
            (str[x] < 'A' || str[x] > 'Z') &&
            (str[x + 1] >= 'a' && str[x + 1] <= 'z') && (str[x] != 39))
            str[x + 1] = str[x + 1] - 32;
        x++;
    }
    return str;
}
