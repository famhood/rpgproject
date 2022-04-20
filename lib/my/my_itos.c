/*
** EPITECH PROJECT, 2021
** my itos
** File description:
** int to string
*/

#include "my.h"

char *itos(int nb)
{
    char digits[] = "0123456789";
    char *tm = malloc(10);
    int s = nb;
    do {
        ++tm;
        s /= 10;
    } while (s);
    *tm = '\0';
    int i = nb;
    do {
        *--tm = digits[i % 10];
        i /= 10;
    } while (i);
    return (tm);
}
