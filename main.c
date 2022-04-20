/*
** EPITECH PROJECT, 2021
** rpg
** File description:
** main
*/

#include "include/header.h"

void print_help(void)
{
    my_printf("HELP\n");
    my_printf("I hope it helped\n");
    return ;
}

data malloc_em_all(void)
{
    data d = malloc(sizeof(struct data) + 1);
    d->win = cr_window(1200, 900);
    d->state = 1;
    d->mi.find_pokeball = true;
    d->s.is_music = true;
    d->s.display_text = true;
    set_up_music(d);
    return (d);
}

void free_em_all(data d)
{
    for (int i = 0; i < CLOCKS; ++i)
        sfClock_destroy(d->cl[i]);
    sfMusic_stop(d->m);
    sfMusic_destroy(d->m);
    free(d);
    return ;
}

int main(int ac, char **av)
{
    srand(time(NULL));
    if (ac > 1 && help(av[1]))
        print_help();
    else {
        data d = malloc_em_all();
        launch(d);
    } return (0);
}