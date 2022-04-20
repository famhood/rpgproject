/*
** EPITECH PROJECT, 2020
** my_getnbr
** File description:
** this file gets a string and returns an integer
*/

int my_getnbr(char const *str)
{
    int sign = 1;
    int result = 0;
    int i = 0;
    char c;

    for (i; str[i] == '-' || str[i] == '+' || str[i] == '\0'; i++) {
        if (str[i] == '-')
            sign *= -1;
    }
    for (i; str[i] != '\0'; i++) {
        c = str[i];
        if (result >= 214748364 && (c - '0') > 7)
            return (0);
        else if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
            break;
        else
            result = result * 10 + str[i] - '0';
    }
    return (sign * result);
}