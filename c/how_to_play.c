/*
** EPITECH PROJECT, 2021
** rpg
** File description:
** how_to_play
*/

#include "../include/constants.h"

void init_htp(data d)
{
    for (int i = 0; i < 2; ++i) {
        d->htp[i] = malloc(sizeof(img));
        d->htp[i] = cr_image(htp_assets[i], NULL, (coord){0, 0});
    }
    sfSprite_setScale(d->htp[0]->s, (sfVector2f){1.47, 1.7});
    return ;
}

void how_to_play(data d)
{
    while (sfRenderWindow_pollEvent(d->win, &d->ev)) {
        if (d->ev.type == 9 || d->ev.type == sfEvtKeyPressed)
            d->state = 1;
        else if (d->ev.type == sfEvtClosed)
            d->state = 0;
    }
    for (int i = 0; i < 2; ++i)
        sfRenderWindow_drawSprite(d->win, d->htp[i]->s, NULL);
    sfRenderWindow_display(d->win);
    return ;
}