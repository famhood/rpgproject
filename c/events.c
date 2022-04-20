/*
** EPITECH PROJECT, 2021
** rpg
** File description:
** events
*/

#include "../include/header.h"

void ev_game(data d)
{
    sfVector2i p = sfMouse_getPosition(d->win);

    switch (d->ev.type) {
        case (sfEvtClosed): d->state = 0; break;
        case (sfEvtMouseButtonPressed): click_game(d, p.x, p.y); break;
        case (sfEvtKeyPressed): move_char(d, 0); break;
        case (sfEvtKeyReleased): move_char(d, 1); break;
        case (sfEvtMouseMoved): button_game(d, p.x, p.y); break;
    }
    return ;
}

void ev_menu(data d)
{
    sfVector2i p = sfMouse_getPosition(d->win);

    switch (d->ev.type) {
        case (sfEvtMouseMoved): button_menu(d, p.x, p.y); return ;
        case (sfEvtKeyPressed):
            switch(d->ev.key.code) {
                case (sfKeyP): d->state = 2; break;
                case (sfKeyS): d->state = 3; break;
                case (sfKeyQ): d->state = 0; break;
            } return ;
        case (sfEvtMouseButtonPressed): click_menu(d, p.x, p.y); return ;
        case (sfEvtClosed): d->state = 0; return ;
    }
}

void ev_settings(data d)
{
    switch (d->ev.type) {
        case (sfEvtClosed): d->state = 0; return ;
        case (sfEvtMouseButtonPressed): settings_click(d); return ;
        case (sfEvtKeyPressed): d->state = 2; break;
    }
    return ;
}