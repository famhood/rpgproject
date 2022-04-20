/*
** EPITECH PROJECT, 2021
** rpg
** File description:
** display
*/

#include "../include/header.h"

void disp_game(data d)
{
    for (int i = 0; i < GAME_IMG; ++i)
        sfRenderWindow_drawSprite(d->win, d->game[i]->s, NULL);
    return ;
}

void disp_menu(data d)
{
    for (int i = 0; i < MENU_IMG; ++i)
        sfRenderWindow_drawSprite(d->win, d->menu[i]->s, NULL);
    return ;
}

void disp_settings(data d)
{
    for (int i = 0; i < SETTINGS_IMG; ++i)
        sfRenderWindow_drawSprite(d->win, d->settings[i]->s, NULL);
    return ;
}

void disp_fight(data d)
{
    for (int i = 0; i < FIGHT_IMG; ++i)
        sfRenderWindow_drawSprite(d->win, d->fight[i]->s, NULL);
    for (int i = 0; i < FIGHT_BUTTON; ++i)
        sfRenderWindow_drawSprite(d->win, d->button[i]->s, NULL);
    return ;

}

void disp_quest(data d)
{
    for (int i = 0; i < QUEST_IMG; ++i)
        sfRenderWindow_drawSprite(d->win, d->quest[i]->s, NULL);
    return ;
}