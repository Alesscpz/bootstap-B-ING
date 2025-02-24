/*
** EPITECH PROJECT, 2024
** bs_world
** File description:
** bs_world.h
*/

#ifndef BS_WORLD_H
    #define BS_WORLD_H
    #define ANGLE_X 45
    #define ANGLE_Y 35

    #include <SFML/Graphics.h>

sfRenderWindow *create_window(int width, int height,
    int bitsPerPixer, char *name);

sfVertexArray *create_line(sfVector2f *point1, sfVector2f *point2);

int simulation(sfRenderWindow *windows, sfClock *clock);

sfVector2f **create_2d_map(int **map);

#endif BS_WORLD_H
