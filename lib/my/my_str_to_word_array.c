/*
** EPITECH PROJECT, 2021
** my_str_to_word_array
** File description:
** takes a string to make a table
*/

#include "my.h"

bool is_alpha(char c)
{
    if (c == ' ')
        return (false);
    return (true);
}

string get_word(string av, int *index)
{
    string a = malloc(200);
    int i = 0;

    while (is_alpha(av[*index])) {
        a[i] = av[*index];
        ++i;
        if (av[*index + 1] == '\0')
            break;
        ++(*index);
    }
    a[i] = '\0';
    return (a);
}

string *my_str_to_word_array(string av)
{
    string *a = malloc(sizeof(string) * 100);
    string w = malloc(sizeof(string) + 1);
    int j = 0;
    int i = 0;

    for (i; av[i] == ' '; ++i);
    for (i; av[i] != '\0'; ++i) {
        if (av[i] == ' ')
            ++j;
        else {
            a[j] = malloc(150);
            a[j] = my_strcpy(a[j], get_word(av, &i));
            ++j;
        }
    } a[j] = NULL;
    free(w);
    return (a);
}
