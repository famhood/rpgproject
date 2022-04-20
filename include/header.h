/*
** EPITECH PROJECT, 2021
** rpg
** File description:
** header
*/

#ifndef HEADER_H_
#define HEADER_H_

#define MENU_IMG 4
#define GAME_IMG 3
#define SETTINGS_IMG 4
#define CLOCKS 4
#define GCOORD 34
#define FIGHT_IMG 4
#define FIGHT_BUTTON 2
#define QUEST_IMG 1
#define QUEST_POKE 4

#include <SFML/Graphics.h>
#include <SFML/Audio.h>
#include <SFML/Graphics/Color.h>
#include <SFML/Graphics/Rect.h>
#include <SFML/System.h>
#include <SFML/System/Clock.h>
#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include <time.h>
#include "my.h"

typedef struct {
    string str;
    int x;
    int y;
    sfFont *font;
    int size;
    sfRenderWindow *win;
} texts;

typedef struct {
    double x;
    double y;
} coord;

typedef struct image {
    sfTexture *t;
    sfSprite *s;
    sfIntRect r;
    coord p;
    bool is_moving;
} * img;

struct set {
    bool is_music;
    bool display_text;
};

struct mission {
    bool find_pokeball;
};

typedef struct data {
    sfRenderWindow *win;
    sfMusic *m;
    int state;
    sfEvent ev;
    sfMusic *music;
    sfClock *cl[4];
    img menu[5];
    img game[10];
    img fight[4];
    img settings[5];
    img button[2];
    img quest[5];
    img htp[2];
    int turn;
    int health;
    int life_battle;
    int pokeball;
    sfView *view;
    struct mission mi;
    struct set s;
} * data;

/*  defines */
#define BETW(a, b, c) (a < b && b < c) ? 1 : 0
#define CMP(a, b) (a.x == b.x && a.y == b.y) ? true : false

/*  Prototypes  */
//  main
int main(int ac, char **av);
void free_em_all(data d);
data malloc_em_all(void);
void print_help(void);

//  create_window
sfRenderWindow *cr_window(unsigned int width, unsigned int height);
void play_the_music(data b);
sfIntRect move_rect(sfIntRect rect, int offset, int max, sfSprite *sprite);
sfText *create_text(texts t);
sfTexture *cr_texture(char *filepath, sfIntRect *r);

//  main game
void launch(data d);
void game(data d);
void menu(data d);
void settings(data d);
void fight(data d);

//  events
void ev_game(data d);
void ev_menu(data d);
void ev_settings(data d);

//  display
void disp_game(data d);
void disp_menu(data d);
void disp_settings(data d);
void disp_fight(data d);
void disp_quest(data d);

//  how_to_play
void how_to_play(data d);
void init_htp(data d);

//  c/lib
img cr_image(string e, sfIntRect *r, coord p);
sfIntRect up_rect(img a, int left, int move, int max);
sfIntRect down_rect(img a, int top, int move, int max);

//  c/events/menu
void button_menu(data d, int x, int y);
void click_menu(data d, int x, int y);

//  c/events/game
void move_char(data d, bool is_ap);
void click_game(data d, int x, int y);
void button_game(data d, int x, int y);
void move_char_two(data d, int x, int y);
void ev_fight(data d);

//  c/events/settings
void settings_click(data d);
void settings_mouse_moved(data d);

//  c/init/menu
void init_menu(data d);

//  c/init/game
void init_game(data d);

//  c/init/settings
void init_settings(data d);

//  c/init/music
void set_up_music(data d);

//  c/init/fight
void init_fight(data d);

// c/init/quest
void init_quest(data d);

//  c/clock/game
void game_clock(data d);

#endif /* !HEADER_H_ */