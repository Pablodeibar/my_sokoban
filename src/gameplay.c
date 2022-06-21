/*
** EPITECH PROJECT, 2022
** gameplay
** File description:
** gameplay
*/

#include "my_sokoban.h"

char **move_left(char **map, int *coo)
{
    map[coo[0]][coo[1]] = ' ';
    map[coo[0]][coo[1] - 1] = 'P';
    return (map);
}

char **move_right(char **map, int *coo)
{
    map[coo[0]][coo[1]] = ' ';
    map[coo[0]][coo[1] + 1] = 'P';
    return (map);
}

char **move_up(char **map, int *coo)
{
    map[coo[0]][coo[1]] = ' ';
    map[coo[0] - 1][coo[1]] = 'P';
    return (map);
}

char **move_down(char **map, int *coo)
{
    map[coo[0]][coo[1]] = ' ';
    map[coo[0] + 1][coo[1]] = 'P';
    return (map);
}

char **move_char(char **map, int c)
{
    int *coo = malloc(sizeof(int) * 2);
    coo = find_player(map);

    switch (c)
    {
        case (KEY_UP) : map = verif_wall_y_u(map, coo);
            break;
        case (KEY_DOWN) : map = verif_wall_y_d(map, coo);
            break;
        case (KEY_RIGHT) : map = verif_wall_x_r(map, coo);
            break;
        case (KEY_LEFT) : map = verif_wall_x_l(map, coo);
            break;
    }
    free(coo);
    return (map);
}
