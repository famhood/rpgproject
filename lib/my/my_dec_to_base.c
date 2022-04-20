/*
** EPITECH PROJECT, 2020
** my dec to base
** File description:
** this function convert from decimal to another base
*/

#include <stdlib.h>
#include "my.h"

int my_dec_to_base(int n, int b)
{
    char s[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l'};
    char *str = malloc(sizeof(char *));
    int i = 0;
    int k = 0;
    while (n != 0) {
        if ((n % b) > 9)
            str[i] = s[(n % b) - 10];
        else
            str[i] = (n % b) + '0';
        i++;
        n = n / b;
    }
    str[i] = '\0';
    for (k; str[k] != '\0'; k++);
    for (k--; k >= 0; k--)
        my_putchar(str[k]);
    free(str);
}

int my_dec_to_base_up(int n, int b)
{
    char s[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L'};
    char *str = malloc(sizeof(char *));
    int i = 0;
    int k = 0;
    while (n != 0) {
        if ((n % b) > 9)
            str[i] = s[(n % b) - 10];
        else
            str[i] = (n % b) + '0';
        i++;
        n = n / b;
    }
    str[i] = '\0';
    for (k; str[k] != '\0'; k++);
    for (k--; k >= 0; k--)
        my_putchar(str[k]);
    free(str);
}
