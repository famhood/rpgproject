/*
** EPITECH PROJECT, 2020
** my put float
** File description:
** this file can print a float
*/

#include "my.h"

int my_putchar(char c);

int my_put_nbr(int nb);

int my_put_float(float f)
{
    int e = f / 1;
    float d1 = (f - e) * 100;
    int df = d1;

    my_put_nbr(e);
    my_putchar('.');
    my_put_nbr(df);
    return (0);
}
