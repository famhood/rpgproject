/*
** EPITECH PROJECT, 2020
** annexe
** File description:
** fonctions annexes pour my_printf
*/

#include "my.h"

int print_s(char const *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] < 32 || str[i] >= 127) {
            my_putchar('\\');
            my_dec_to_base(str[i], 8);
        } else
            my_putchar(str[i]);
    }
    return (0);
}

int my_print_ptr(int nb)
{
    my_putstr("0x");
    my_dec_to_base(nb, 16);
    return (0);
}

int my_putcharn(int n)
{
    write(1, &n, 1);
}