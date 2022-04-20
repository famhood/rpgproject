/*
** EPITECH PROJECT, 2021
** B-MUL-200-NCY-2-1-myrpg-evan.koehler
** File description:
** quest
*/

#include "../../include/constants.h"

void if_on_poke(data d, sfEvent event)
{
    sfVector2i pos = sfMouse_getPosition(d->win);
    sfFont *fontI;
    sfText *textI;

    for ( int i = 0, a = 4; i < a;) {
        if ( pos == poke[]) {
            textI = sfText_create();
            sfText_setString(textI, "Vous avez trouvez une pokeball !");
            sfText_setFont(textI, fontI);
            sfText_setCharacterSize(textI, 30);
            i++;
        }
    }
}

void manage_mouse_click(data d, sfEvent event)
{
    sfVector2i p = sfMouse_getPosition(d->win);
    sfFont *font;
    sfText *text;
    font = sfFont_createFromFile("../../ass/arial.ttf");

    if (event.type == sfEvtMouseButtonPressed) {
        if ( p.x == 0 && p.y == -20 || p.x == 10 && p.y == -20) {
            text = sfText_create();
            sfText_setString(text, "Ramenez moi mes pokeballs :(");
            sfText_setFont(text, font);
            sfText_setCharacterSize(text, 30);
        }
        if_on_poke(d, event);
    }
}

void analyse_event(data d)
{
    sfEvent event;

    while ( sfRenderWindow_pollEvent(d->win, &event)) {
        if (event.type == sfEvtMouseButtonPressed)
            manage_mouse_click(d, event);
    }
}