/*
** EPITECH PROJECT, 2024
** bs_world
** File description:
** simulation.c
*/

#include "bs_world.h"

static void events(sfRenderWindow *windows)
{
    sfEvent event;

    while (sfRenderWindow_pollEvent(windows, &event)) {
        if (event.type == sfEvtClosed)
            sfRenderWindow_close(windows);
    }
}

int simulation(sfRenderWindow *windows, sfClock *clock)
{
    sfClock_restart(clock);
    while (sfRenderWindow_isOpen(windows)) {
        events(windows);
        sfRenderWindow_display(windows);
    }
    return 0;
}
