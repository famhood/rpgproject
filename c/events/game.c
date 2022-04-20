/*
** EPITECH PROJECT, 2021
** rpg
** File description:
** game
*/

#include "../../include/constants.h"

void button_game(data d, int x, int y)
{
    if (BETW(10, x, 150) && BETW(10, y, 55))
        d->game[2]->r = up_rect(d->game[2], 120, 0, 240);
    else
        d->game[2]->r = up_rect(d->game[2], 0, 0, 240);
    return ;
}

void click_game(data d, int x, int y)
{
    int cx = d->game[0]->r.left;
    int cy = d->game[0]->r.top;

    if (BETW(10, x, 150) && BETW(10, y, 55))
        d->state = 3;
    return ;
}

bool is_free(data d, int x, int y)
{
    int mx[2];
    int my[2];

    if (x > 550 || x < -250 || y > 215 || y < -255)
        return (false);
    for (int i = 0; i < GCOORD; ++i) {
        mx[0] = g_map[i][0].x - 1;
        my[0] = g_map[i][0].y - 1;
        mx[1] = g_map[i][1].x + 1;
        my[1] = g_map[i][1].y + 1;
        if (mx[0] < x && x < mx[1] && my[0] < y && y < my[1])
            return (false);
    } return (true);
}

void move_char_two(data d, int x, int y)
{
    sfVector2f p = sfSprite_getPosition(d->game[1]->s);
    int cx = d->game[0]->r.left + x;
    int cy = d->game[0]->r.top + y;

    if (!is_free(d, cx, cy))
        return ;

    up_rect(d->game[1], 0, 64, 256);
    d->game[0]->r.left += x;
    d->game[0]->r.top += y;
    sfSprite_setTextureRect(d->game[0]->s, d->game[0]->r);
    sfView_setCenter(d->view, p);
    sfRenderWindow_drawSprite(d->win, d->game[0]->s, NULL);
    bool a = gr[0][0].y < cy && cy < gr[0][1].y;
    for (int i = 0; i < 3; ++i) {
        a = gr[i][0].y < cy && cy < gr[i][1].y;
        if (gr[i][0].x < cx && cx < gr[i][1].x && a && rand() % 15 == 1)
            d->state = 4;
    } return ;
}

void move_char(data d, bool is_ap)
{
    d->game[0]->is_moving = !is_ap;
    switch (d->ev.key.code) {
        case (sfKeyZ): down_rect(d->game[1], 192, 0, 256);
            move_char_two(d, 0, -5);
            break;
        case (sfKeyS): down_rect(d->game[1], 0, 0, 256);
            move_char_two(d, 0, 5);
            break;
        case (sfKeyQ): down_rect(d->game[1], 64, 0, 256);
            move_char_two(d, -5, 0);
            break;
        case (sfKeyD): down_rect(d->game[1], 128, 0, 256);
            move_char_two(d, 5, 0);
            break;
        case (sfKeyEscape): d->state = 3;
    } return ;
}