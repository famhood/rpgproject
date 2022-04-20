/*
** EPITECH PROJECT, 2020
** my_strcnmp
** File description:
** thsi file does something (I hope so)
*/

int my_strncmp(char const *s1, char const *s2, int n)
{
    int i = 0;
    int res;

    while (i <= n - 1) {
        if (s1[i] != s2[i]) {
            res = s1[i] - s2[i];
            return (res);
        }
        i++;
    }
    return (0);
}
