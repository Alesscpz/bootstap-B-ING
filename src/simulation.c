/*
** EPITECH PROJECT, 2024
** bs_world
** File description:
** simulation.c
*/

#include "bs_world.h"

int simulation(sfRenderWindow *windows, sfClock *clock)
{
    sfClock_restart(clock);
    while (sfRenderWindow_isOpen(windows)) {
        sfRenderWindow_display(windows);
    }
    return 0;
}
