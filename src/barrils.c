/*
** EPITECH PROJECT, 2022
** barrils
** File description:
** barrils
*/

#include "my_sokoban.h"

char **verif_bar_x_l(char **map, int *coo)
{
    if (map[coo[0]][coo[1] - 1] == 'X' && map[coo[0]][coo[1] - 2] == 'O') {
        map[coo[0]][coo[1] - 2] = 'X';
        map = move_left(map, coo);
        return (map);
    }
    if (map[coo[0]][coo[1] - 1] == 'X' && map[coo[0]][coo[1] - 2] == ' ') {
        map[coo[0]][coo[1] - 2] = 'X';
        map = move_left(map, coo);
        return (map);
    }
    map = move_left(map, coo);
    return (map);
}

char **verif_bar_x_r(char **map, int *coo)
{
    if (map[coo[0]][coo[1] + 1] == 'X' && map[coo[0]][coo[1] + 2] == 'O') {
        map[coo[0]][coo[1] + 2] = 'X';
        map = move_right(map, coo);
        return (map);
    }
    if (map[coo[0]][coo[1] + 1] == 'X' && map[coo[0]][coo[1] + 2] == ' ') {
        map[coo[0]][coo[1] + 2] = 'X';
        map = move_right(map, coo);
        return (map);
    }
    map = move_right(map, coo);
    return (map);
}

char **verif_bar_y_d(char **map, int *coo)
{
    if (map[coo[0] + 1][coo[1]] == 'X' && map[coo[0] + 2][coo[1]] == 'O') {
        map[coo[0] + 2][coo[1]] = 'X';
        map = move_down(map, coo);
        return (map);
    }
    if (map[coo[0] + 1][coo[1]] == 'X' && map[coo[0] + 2][coo[1]] == ' ') {
        map[coo[0] + 2][coo[1]] = 'X';
        map = move_down(map, coo);
        return (map);
    }
    map = move_down(map, coo);
    return (map);
}

char **verif_bar_y_u(char **map, int *coo)
{
    if (map[coo[0] - 1][coo[1]] == 'X' && map[coo[0] - 2][coo[1]] == 'O') {
        map[coo[0] - 2][coo[1]] = 'X';
        map = move_up(map, coo);
        return (map);
    }
    if (map[coo[0] - 1][coo[1]] == 'X' && map[coo[0] - 2][coo[1]] == ' ') {
        map[coo[0] - 2][coo[1]] = 'X';
        map = move_up(map, coo);
        return (map);
    }
    map = move_up(map, coo);
    return (map);
}
