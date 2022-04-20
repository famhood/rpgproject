/*
** EPITECH PROJECT, 2021
** fight
** File description:
** fight
*/

#include "../../include/constants.h"

void init_fight(data d)
{
    sfIntRect r = (sfIntRect){0, 0, 120, 45};
    sfVector2f ip[] = {{5, 5}, {2, 2}, {3, 3}, {1, 1}};

    for (int i = 0; i < FIGHT_IMG; ++i) {
        d->fight[i] = malloc(sizeof(struct image));
        d->fight[i] = cr_image(f_assets[i], NULL, f_coord[i]);
        sfSprite_setScale(d->fight[i]->s, ip[i]);
    } for (int i = 0; i < FIGHT_BUTTON; ++i) {
        d->button[i] = malloc(sizeof(struct image));
        d->button[i] = cr_image(fb_assets[i], &r, fb_coord[i]);
        up_rect(d->fight[i], 0, 0, 240);
    } d->health = 100;
    d->life_battle = 200;
}