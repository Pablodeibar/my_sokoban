/*
** EPITECH PROJECT, 2022
** verif
** File description:
** verif
*/

#include "my_sokoban.h"

char **verif_wall_x_l(char **map, int *coo)
{
    if (map[coo[0]][coo[1] - 1] == '#' || ((map[coo[0]][coo[1] - 1] == 'X'
    && map[coo[0]][coo[1] - 2] == '#') || (map[coo[0]][coo[1] - 1] == 'X'
    && map[coo[0]][coo[1] - 2] == 'X')))
        return (map);
    map = verif_bar_x_l(map, coo);
    return (map);
}

char **verif_wall_x_r(char **map, int *coo)
{
    if (map[coo[0]][coo[1] + 1] == '#' || ((map[coo[0]][coo[1] + 1] == 'X'
    && map[coo[0]][coo[1] + 2] == '#') || (map[coo[0]][coo[1] + 1] == 'X'
    && map[coo[0]][coo[1] + 2] == 'X')))
        return (map);
    map = verif_bar_x_r(map, coo);
    return (map);
}

char **verif_wall_y_d(char **map, int *coo)
{
    if (map[coo[0] + 1][coo[1]] == '#' || ((map[coo[0] + 1][coo[1]] == 'X'
    && map[coo[0] + 2][coo[1]] == '#') || (map[coo[0] + 1][coo[1]] == 'X'
    && map[coo[0] + 2][coo[1]] == 'X')))
        return (map);
    map = verif_bar_y_d(map, coo);
    return (map);
}

char **verif_wall_y_u(char **map, int *coo)
{
    if (map[coo[0] - 1][coo[1]] == '#' || ((map[coo[0] - 1][coo[1]] == 'X'
    && map[coo[0] - 2][coo[1]] == '#') || (map[coo[0] - 1][coo[1]] == 'X'
    && map[coo[0] - 2][coo[1]] == 'X')))
        return (map);
    map = verif_bar_y_u(map, coo);
    return (map);
}
