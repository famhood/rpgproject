/*
** EPITECH PROJECT, 2021
** print_tab
** File description:
** print double tab
*/

#include "my.h"

int print_tab(char **tab)
{
    for (int i = 0; tab[i] != NULL; ++i) {
        for (int j = 0; tab[i][j] != '\0'; ++j)
            my_putchar(tab[i][j]);
        my_putchar('\n');
    } return (0);
}