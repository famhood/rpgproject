/*
** EPITECH PROJECT, 2021
** rpg
** File description:
** music
*/

#include "../../include/header.h"

void set_up_music(data d)
{
    d->m = sfMusic_createFromFile("ass/music.ogg");
    sfMusic_setLoop(d->m, sfTrue);

    if (d->m != NULL)
        sfMusic_play(d->m);
    else
        my_putstr("Error loading music\n");
    return ;
}