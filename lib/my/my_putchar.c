/*
** EPITECH PROJECT, 2020
** my_putchar
** File description:
** put your char here
*/

#include <unistd.h>

int my_putchar(char c)
{
    return (write(1, &c, 1));
}
