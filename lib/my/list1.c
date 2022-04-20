/*
** EPITECH PROJECT, 2020
** list functions
** File description:
** this file contains many list functions
*/

#include "my.h"

list new_list(void)
{
    return (NULL);
}

int is_list_empty(list l)
{
    if (l == NULL)
        return (1);
    return (0);
}

int list_len(list l)
{
    int i = 0;

    if (l->next != NULL)
        for (i; l->next != NULL; i++)
            l = l->next;
    return (i);
}

list list_append(list l, int x)
{
    list another = malloc(sizeof(*another));

    if (another == NULL) {
        my_putstr("Error allocating the memory\n");
        return (NULL);
    }
    another->value = x;
    another->next = NULL;
    if (is_list_empty(l))
        return (another);
    list temp = l;
    while (temp->next != NULL)
        temp = temp->next;
    temp->next = another;
    return (l);
}

list list_appbeg(list l, int x)
{
    list another = malloc(sizeof(*another));

    if (another == NULL) {
        my_putstr("Error allocating memory\n");
        return (NULL);
    }
    another->value = x;
    if (is_list_empty(l))
        another->next = NULL;
    else
        another->next = l;
    return (another);
}
