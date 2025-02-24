/*
** EPITECH PROJECT, 2024
** bs_world
** File description:
** 3d_to_2d.c
*/

#include "bs_world.h"
#include <math.h>

sfVector2f project_iso_point(int x, int y, int z)
{
    sfVector2f point;
    int rad_x = convert_degree_to_radian(ANGLE_X);
    int rad_y = convert_degree_to_radian(ANGLE_Y);

    point.x = cos(rad_x) * x - cos(rad_x) * y;
    point.y = sin(rad_y) * y + sin(rad_y) * x - z;
    return point;
}

sfVector2f **create_2d_map(int **map)
{
    sfVector2f **new_map;

    for (int i = 0; map[i] != NULL; i++) {
        for (int j = 0; map[i][j] != NULL; i++) {
            new_map[i][j] = project_iso_point(i, j, map[i][j]);
        }
    }
    return new_map;
}
