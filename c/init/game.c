/*
** EPITECH PROJECT, 2021
** rpg
** File description:
** game
*/

#include "../../include/constants.h"

void init_game(data d)
{
    sfIntRect r = (sfIntRect){0, 0, 64, 64};
    sfIntRect t = (sfIntRect){0, 0, 120, 45};
    sfIntRect b = (sfIntRect){0, 0, 1200, 900};
    sfIntRect *rec[] = {&b, &r, &t};

    for (int i = 0; i < GAME_IMG; ++i) {
        d->game[i] = malloc(sizeof(struct image));
        d->game[i] = cr_image(g_assets[i], rec[i], g_coord[i]);
    } for (int i = 2; i < GAME_IMG; ++i)
        d->game[i]->r = up_rect(d->game[i], 0, 0, 240);
    sfSprite_setPosition(d->game[0]->s, (sfVector2f){-700, -1022});
    sfSprite_setScale(d->game[0]->s, (sfVector2f){5, 5});
    sfSprite_setPosition(d->game[1]->s, (sfVector2f){536, 386});
    sfSprite_setScale(d->game[1]->s, (sfVector2f){2, 2});
    d->game[1]->r = up_rect(d->game[1], 0, 0, 256);
    d->view = sfView_create();
    return ;
}