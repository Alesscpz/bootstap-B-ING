/*
** EPITECH PROJECT, 2024
** bs_world
** File description:
** print_error.c
*/

#include <stdio.h>

int print_error(const char *msg)
{
    dprintf(2, "%s\n", msg);
    return 84;
}
