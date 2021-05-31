/*
** EPITECH PROJECT, 2020
** my_strlen.c
** File description:
** my_strlen.c
*/

int my_strlen(char const *str)
{
    int str_len = 0;

    while (str[str_len] != '\0') {
        str_len++;
    }
    return str_len;
}
