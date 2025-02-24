/*
** EPITECH PROJECT, 2025
** main.c
** File description:
** main.c
*/

#include "bs_world.h"
#include <math.h>

sfVector2f project_iso_point(int x, int y, int z)
{
    sfVector2f point;

    point.x = cos(ANGLE_X) * x - cos(ANGLE_X) * y;
    point.y = sin(ANGLE_Y) * y + sin (ANGLE_Y) * x - z;
    return point;
}