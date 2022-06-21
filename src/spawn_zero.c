/*
** EPITECH PROJECT, 2022
** spawn
** File description:
** spawn
*/

#include "my_sokoban.h"

char **respawn(char **map, int **all_coo, int nbr)
{
    for (int i = 0; i != nbr; i++) {
        if (map[all_coo[i][0]][all_coo[i][1]] == ' ') {
            map[all_coo[i][0]][all_coo[i][1]] = 'O';
        }
    }
    return (map);
}
