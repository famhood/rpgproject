/*
** EPITECH PROJECT, 2020
** my_show_word_array
** File description:
** this file pprints words line per line
*/

#include <stdlib.h>

int my_putstr(char const *str);

int my_show_word_array(char * const *tab)
{
    int i = 0;
    int j = 0;
    int k = 0;
    int t_len = 0;

    while (tab[t_len] != 0)
        t_len++;

    char *src = malloc(sizeof(char) * (t_len + 1));

    for (int j = 0; tab[j] != 0; j++) {
        for (int i = 0; tab[j][i] != '\0'; i++) {
            src[k] = tab[j][i];
            k++;
        }
        src[k] = '\n';
        k++;
    }
    my_putstr(src);
}
