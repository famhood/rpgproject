/*
** EPITECH PROJECT, 2021
** rpg
** File description:
** settings
*/

#include "../../include/header.h"

void settings_click(data d)
{
    int x = d->ev.mouseButton.x;
    int y = d->ev.mouseButton.y;
    bool a[] = {
        99 < x && x < 221 && 199 < y && y < 249,
        99 < x && x < 221 && 299 < y && y < 349,
    };

    if (a[0]) {
        d->s.is_music = !d->s.is_music;
        up_rect(d->settings[2], 0, 120, 240);
        if (!d->s.is_music)
            sfMusic_play(d->m);
        else
            sfMusic_stop(d->m);
    } else if (a[1])
        d->state = 0;
    else
        d->state = 2;
    return ;
}