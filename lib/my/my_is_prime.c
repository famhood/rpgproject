/*
** EPITECH PROJECT, 2020
** my_is_prime
** File description:
** This file tells us if a number is a prime one
*/

int my_is_prime(int nb)
{
    int i;

    if (nb <= 1)
        return (0);
    for (i = 2; i < nb; i++)
        if (nb % i == 0)
            return (0);
    return (1);
}
