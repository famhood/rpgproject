/*
** EPITECH PROJECT, 2021
** rpg
** File description:
** menu
*/

#include "../../include/constants.h"

void init_menu(data d)
{
    sfIntRect r = (sfIntRect){0, 0, 120, 45};
    sfIntRect *rec[] = {NULL, &r, &r, &r};

    for (int i = 0; i < MENU_IMG; ++i) {
        d->menu[i] = malloc(sizeof(struct image));
        d->menu[i] = cr_image(m_assets[i], rec[i], m_coord[i]);
    }
    sfSprite_setScale(d->menu[0]->s, (sfVector2f){1.47, 1.7});
    return ;
}