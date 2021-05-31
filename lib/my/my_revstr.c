/*
** EPITECH PROJECT, 2020
** my_revstr.c
** File description:
** my_revstr.c
*/

int my_strlen(char const *str);

char *my_revstr(char *str)
{
    int x = 0;
    int y = 0;
    char tmp_char[my_strlen(str)];

    while (x != my_strlen(str)) {
        tmp_char[x] = str[x];
        x++;
    }
    x--;
    while (x != -1) {
        str[y] = tmp_char[x];
        x--;
        y++;
    }
    return str;
}
