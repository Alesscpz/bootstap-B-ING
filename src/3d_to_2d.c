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
    int rad_x = convert_degree_to_radian(ANGLE_X);
    int rad_y = convert_degree_to_radian(ANGLE_Y);

    point.x = cos(rad_x) * x - cos(rad_x) * y;
    point.y = sin(rad_y) * y + sin (rad_y) * x - z;
    return point;
}