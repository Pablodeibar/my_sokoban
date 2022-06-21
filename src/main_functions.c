/*
** EPITECH PROJECT, 2022
** functions
** File description:
** functions
*/

#include "my_sokoban.h"

int verif_map(char *map)
{
    for (int i = 0; map[i] != '\0'; i++) {
        if (map[i] != '#' && map[i] != 'P' && map[i] != 'X' 
        && map[i] != 'O' && map[i] != ' ' && map[i] != '\n')
            return (1);
    }
    return (0);
}

int redirect(int ar, char **av)
{
    char *map = open_file(av[1]);

    if (verif_map(map) == 1) {
        return (84);
    } else if (nbr_site(map) == 1) {
        return (84);
    } else {
        if (start(map) == 1)
            return (1);
    }
    free(map);
    return (0);
}
