/*
** EPITECH PROJECT, 2021
** event
** File description:
** fight
*/

#include "../../include/constants.h"

void button_fight(data d, int x, int y)
{
    bool a[] = {
        (600 < y && y < 650) && (95 < x && x < 225),
        (600 < y && y < 650) && (295 < x && x < 425),
    };

    for (int i = 0; i < FIGHT_BUTTON; ++i) {
        if (a[i])
            up_rect(d->button[i], 120, 0, 240);
        else
            up_rect(d->button[i], 0, 0, 240);
    }
    return ;
}

void click_fight(data d, int x, int y)
{
    bool a[] = {
        (BETW(600, y, 650) && BETW(95, x, 225)),
        (BETW(600, y, 650) && BETW(295, x, 425)),
    };

    for (int i = 0; i < FIGHT_BUTTON; ++i)
        if (a[i]) {
            if (d->life_battle < 50)
                sfSprite_setColor(d->fight[3]->s, sfGreen);
            else if (d->life_battle < 150)
                sfSprite_setColor(d->fight[3]->s, sfRed);
            d->life_battle -= 20;
            d->turn = 1;
        }
    return ;
}

void ev_fight(data d)
{
    sfVector2i p = sfMouse_getPosition(d->win);
    d->turn = 0;

    switch (d->ev.type) {
        case (sfEvtClosed): d->state = 0; break;
        case (sfEvtMouseButtonPressed): click_fight(d, p.x, p.y); break;
        case (sfEvtMouseMoved): button_fight(d, p.x, p.y); break;
    }
    if (d->turn == 1) {
        if (d->health <= 0 || d->life_battle <= 0) {
            sfSprite_setColor(d->fight[3]->s, sfWhite);
            d->state = 2;
            d->life_battle = 200;
        } else if (d->pokeball < 2)
            d->health -= rand() % 25;
        else
            d->health -= rand() % 5;
    } return ;
}