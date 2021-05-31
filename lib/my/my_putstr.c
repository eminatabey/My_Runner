/*
** EPITECH PROJECT, 2020
** my_putstr.c
** File description:
** my_putstr.c
*/

void my_putchar(char c);

int my_putstr(char const *str)
{
    int char_position = 0;

    while (str[char_position] != '\0') {
        my_putchar(str[char_position]);
        char_position++;
    }
    return 0;
}
