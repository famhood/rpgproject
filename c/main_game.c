/*
** EPITECH PROJECT, 2021
** rpg
** File description:
** main_game
*/

#include "../include/header.h"

void launch(data d)
{
    init_menu(d);
    init_game(d);
    init_settings(d);
    init_fight(d);
    init_htp(d);

    while (d->state != 0) {
        switch (d->state) {
            case (1): menu(d); break;
            case (2): game(d); break;
            case (3): settings(d); break;
            case (4): fight(d); break;
            case (5): how_to_play(d); break;
        }
        sfRenderWindow_clear(d->win, sfBlack);
    }
    free_em_all(d);
    return ;
}

void game(data d)
{
    while (sfRenderWindow_pollEvent(d->win, &(d->ev)))
        ev_game(d);
    disp_game(d);
    sfRenderWindow_display(d->win);
    return ;
}

void menu(data d)
{
    while (sfRenderWindow_pollEvent(d->win, &(d->ev)))
        ev_menu(d);
    disp_menu(d);
    sfRenderWindow_display(d->win);
    return ;
}

void settings(data d)
{
    while (sfRenderWindow_pollEvent(d->win, &(d->ev)))
        ev_settings(d);
    disp_settings(d);
    sfRenderWindow_display(d->win);
    return ;
}

void fight(data d)
{
    while (sfRenderWindow_pollEvent(d->win, &(d->ev)))
        ev_fight(d);
    disp_fight(d);
    sfRenderWindow_display(d->win);
    return ;
}