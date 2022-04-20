/*
** EPITECH PROJECT, 2020
** my_strlen
** File description:
** this file can count how many characters there are in a string
*/

int my_strlen(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        i++;
    }
    return (i);
}
