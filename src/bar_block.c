/*
** EPITECH PROJECT, 2022
** bar_block
** File description:
** bar_block
*/

#include "my_sokoban.h"

int find_nbr_bar_loop(char **map, int i, int nbr)
{
    for (int j = 0; map[i][j] != '\0'; j++) {
        if (map[i][j] == 'X') {
            nbr = nbr + 1;
        }
    }
    return (nbr);
}

int find_nbr_bar(char **map)
{
    int nbr = 0;
    int cpy;

    for (int i = 0; map[i] != NULL; i++) {
        cpy = 0;
        cpy = find_nbr_bar_loop(map, i, cpy);
        nbr = nbr + cpy;
    }
    return (nbr);
}

int bar_block(char **map, int i, int k, int good)
{
    if ((map[i + 1][k] == '#' && map[i][k + 1] == '#')
    || (map[i + 1][k] == '#' && map[i][k - 1] == '#')
    || (map[i - 1][k] == '#' && map[i][k + 1] == '#')
    || (map[i - 1][k] == '#' && map[i][k - 1] == '#')) {
        good++;
    }
    return (good);
}

int bar_block_loop(char **map, int i, int k, int error)
{
    if (map[i][k] == 'X') {
        error = bar_block(map, i, k, error);
    }
    return (error);
}

int bar_block_ext(char **map)
{
    int nbr = find_nbr_bar(map);
    int error = 0;

    for (int i = 0; map[i] != NULL; i++) {
        for (int k = 0; map[i][k] != '\0'; k++) {
            error = bar_block_loop(map, i, k, error);
        }
    }
    if (error == nbr)
        return (1);
    return (0);
}
