/*
** EPITECH PROJECT, 2021
** rpg
** File description:
** lib1
*/

#include "../../include/header.h"

img cr_image(string e, sfIntRect *r, coord p)
{
    img i = malloc(sizeof(struct image));

    i->t = cr_texture(e, NULL);
    i->s = sfSprite_create();
    if (r != NULL) {
        i->r.left = r->left;
        i->r.height = r->height;
        i->r.top = r->top;
        i->r.width = r->width;
        sfSprite_setTextureRect(i->s, i->r);
    }
    i->p = p;
    i->is_moving = false;
    sfSprite_setPosition(i->s, (sfVector2f){i->p.x, i->p.y});
    sfSprite_setTexture(i->s, i->t, sfTrue);
    return (i);
}

sfIntRect down_rect(img a, int top, int move, int max)
{
    if (top == 0 && move != 0)
        a->r.top = (a->r.top + move >= max) ? 0 : a->r.top + move;
    else if (move == 0 && top != 0)
        a->r.top = (top >= max) ? 0 : top;
    else
        a->r.top = 0;
    sfSprite_setTextureRect(a->s, a->r);
    return (a->r);
}

sfIntRect up_rect(img a, int left, int move, int max)
{
    if (left == 0 && move != 0)
        a->r.left = (a->r.left + move >= max) ? 0 : a->r.left + move;
    else if (move == 0 && left != 0)
        a->r.left = (left >= max) ? 0 : left;
    else
        a->r.left = 0;
    sfSprite_setTextureRect(a->s, a->r);
    return (a->r);
}