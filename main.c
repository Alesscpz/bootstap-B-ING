/*
** EPITECH PROJECT, 2024
** main.c
** File description:
** main.c
*/

#include <stddef.h>
#include <stdlib.h>
#include <SFML/Graphics.h>

int error_check(int ac, char **env)
{
    if (ac != 1 || env[0] == NULL)
        return -1;
    return 0;
}

int main(int argc, char **argv, char **env)
{
    sfRenderWindow* window;

    if (error_check(argc, env) == -1)
        exit(84);
    window = create_window(1920, 1080, 32, "bs_world");
    return 0;
}
