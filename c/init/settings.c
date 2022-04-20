/*
** EPITECH PROJECT, 2021
** rpg
** File description:
** settings
*/

#include "../../include/constants.h"

void init_settings(data d)
{
    sfIntRect r = (sfIntRect){0, 0, 120, 45};
    sfIntRect *rec[] = {NULL, &r, &r, &r};

    for (int i = 0; i < SETTINGS_IMG; ++i) {
        d->settings[i] = malloc(sizeof(struct image));
        d->settings[i] = cr_image(s_assets[i], rec[i], m_coord[i]);
        if (i != 0)
            up_rect(d->settings[i], 0, 0, 240);
    }
    sfSprite_setScale(d->settings[0]->s, (sfVector2f){1.47, 1.7});
    if (d->s.is_music)
        up_rect(d->settings[2], 0, 0, 240);
    else
        up_rect(d->settings[2], 120, 0, 240);
}