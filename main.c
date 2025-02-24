/*
** EPITECH PROJECT, 2024
** main.c
** File description:
** main.c
*/

#include <stddef.h>
#include <stdlib.h>

int error_check(int ac, char **env)
{
    if (ac != 1 || env[0] == NULL)
        return -1;
    return 0;
}

int main(int argc, char **argv, char **env)
{
    if (error_check(argc, env) == -1)
        exit(84);
    return 0;
}
