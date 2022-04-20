/*
** EPITECH PROJECT, 2020
** my_str_isnum
** File description:
** this file can see if what you sent it is coposed of numbers
*/

int my_str_isnum(char const *str)
{
    for (int i = 0; str[i] != '\0'; i++)
        if (str[i] > '9' || str[i] < '0')
            return (0);
    return (1);
}
