/*
** EPITECH PROJECT, 2021
** rpg
** File description:
** game
*/

#include "../../include/header.h"

void game_clock(data d)
{
    float s[CLOCKS];

    for (int i = 0; i < CLOCKS; ++i)
        s[i] = sfClock_getElapsedTime(d->cl[i]).microseconds / 1000000;
    return ;
}