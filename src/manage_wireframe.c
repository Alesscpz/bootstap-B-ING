/*
** EPITECH PROJECT, 2024
** bs_world
** File description:
** manage_wireframe.c
*/

#include <SFML/Graphics.h>
#include <SFML/System.h>

sfVertexArray *create_line(sfVector2f *point1, sfVector2f *point2)
{
    sfVertexArray *vertex_array = sfVertexArray_create();
    sfVertex vertex1 = {.position = *point1, .color = sfWhite};
    sfVertex vertex2 = {.position = *point2, .color = sfWhite};

    sfVertexArray_append(vertex_array, vertex1);
    sfVertexArray_append(vertex_array, vertex2);
    sfVertexArray_setPrimitiveType(vertex_array, sfLinesStrip);
    return (vertex_array);
}
