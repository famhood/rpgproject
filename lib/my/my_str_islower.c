/*
** EPITECH PROJECT, 2020
** my_str_islower
** File description:
** this pgm can tell if the string you sent is only composed of lowercase alpha
*/

int my_str_islower(char const *str)
{
    for (int i = 0; str[i] != '\0'; i++)
        if (str[i] < 'a' || str[i] > 'z')
            return (0);
    return (1);
}
