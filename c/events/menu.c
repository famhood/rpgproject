/*
** EPITECH PROJECT, 2021
** rpg
** File description:
** menu
*/

#include "../../include/header.h"

void button_menu(data d, int x, int y)
{
    bool a[] = {
        (BETW(95, y, 145) && BETW(95, x, 221)),
        (BETW(195, y, 255) && BETW(95, x, 221)),
        (BETW(295, y, 355) && BETW(95, x, 221)),
    };

    for (int i = 1; i < MENU_IMG; ++i) {
        if (a[i - 1])
            up_rect(d->menu[i], 120, 0, 240);
        else
            up_rect(d->menu[i], 0, 0, 240);
    }
    return ;
}

void click_menu(data d, int x, int y)
{
    bool a[] = {
        (BETW(95, y, 145) && BETW(95, x, 221)),
        (BETW(195, y, 255) && BETW(95, x, 221)),
        (BETW(295, y, 355) && BETW(95, x, 221)),
    };
    const int b[] = {2, 5, 0};

    for (int i = 0; i < MENU_IMG - 1; ++i)
        if (a[i])
            d->state = b[i];
    return ;
}