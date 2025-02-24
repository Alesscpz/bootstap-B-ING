/*
** EPITECH PROJECT, 2024
** bs_world
** File description:
** main.c
*/

#include <SFML/Graphics.h>
#include "bs_world.h"

int error_check(int ac, char **env)
{
    if (ac != 1 || env[0] == NULL)
        return -1;
    return 0;
}

int main(int argc, char **argv, char **env)
{
    sfRenderWindow* window;
    sfClock *clock = sfClock_create();

    if (!clock)
        return 84;
    if (error_check(argc, env) == -1)
        exit(84);
    window = create_window(1920, 1080, 32, "bs_world");
        if (window == NULL)
        return print_error("The creation of the window does'nt succeed\n");
    simulation(window, clock);
    return 0;
}
