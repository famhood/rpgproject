/*
** EPITECH PROJECT, 2020
** createMyWindow
** File description:
** this file returns a window
*/

#include "../../include/header.h"

sfRenderWindow *cr_window(unsigned int width, unsigned int height)
{
    sfVector2i pos;
    pos.x = 0;
    pos.y = 0;
    sfRenderWindow *window;
    sfVideoMode video_mode = {width, height, 32};
    window = sfRenderWindow_create(video_mode, "My RPG", sfClose,
        NULL);
    sfRenderWindow_setFramerateLimit(window, 30);
    sfRenderWindow_setPosition(window, pos);
    return (window);
}

sfText *create_text(texts t)
{
    sfText *text = sfText_create();
    sfText_setString(text, t.str);
    sfText_setPosition(text, (sfVector2f){t.x, t.y});
    sfText_setFont(text, t.font);
    sfText_setCharacterSize(text, t.size);
    sfRenderWindow_drawText(t.win, text, NULL);
    return (text);
}

sfTexture *cr_texture(char *filepath, sfIntRect *r)
{
    sfTexture *f = sfTexture_createFromFile(filepath, r);
    if (f == NULL) {
        my_putstr("Error: couldn't load sources.\n");
        return (NULL);
    } else
        return (f);
}