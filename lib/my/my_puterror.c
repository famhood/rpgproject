/*
** EPITECH PROJECT, 2020
** my_puterror
** File description:
** this file prints a message in the error output
*/

#include <unistd.h>

int my_puterror(char const *str)
{
    for (int i = 0; str[i] != '\0'; i++)
        write(2, &str[i], 1);
    return (0);
}