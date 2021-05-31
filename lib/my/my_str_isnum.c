/*
** EPITECH PROJECT, 2020
** my_str_isnum.c
** File description:
** my_str_isnum.c
*/

int my_str_isnum(char const *str)
{
    int count = 0;

    for (int x = 0; str[x] != '\0'; x++) {
        if (str[x] > '9' || str[x] < '0')
            count++;
    }
    if (count == 0)
        return 1;
    else
        return 0;
}
