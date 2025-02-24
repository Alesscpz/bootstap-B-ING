/*
** EPITECH PROJECT, 2024
** bs_world
** File description:
** bs_world.h
*/

#ifndef BS_WORLD_H
    #define BS_WORLD_H

    #include <SFML/Graphics.h>

sfRenderWindow *create_window(int width, int height,
    int bitsPerPixer, char *name);

sfVertexArray * create_line(sfVector2f *point1, sfVector2f *point2);

#endif BS_WORLD_H
