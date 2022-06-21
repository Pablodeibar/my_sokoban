/*
** EPITECH PROJECT, 2022
** bar
** File description:
** bar
*/

#include "my_sokoban.h"

int verif_bar(char **map, int i, int k, int error)
{
    if ((map[i + 1][k] == '#' && map[i][k + 1] == '#')
    || (map[i + 1][k] == '#' && map[i][k - 1] == '#')
    || (map[i - 1][k] == '#' && map[i][k + 1] == '#')
    || (map[i - 1][k] == '#' && map[i][k - 1] == '#'))
        error = 1;
    return (error);
}

char **start_loop_print(char **map_tab)
{
    for (int i = 0; map_tab[i] != NULL; i++) {
        move(i, 0);
        printw(map_tab[i]);
    }
    refresh();
}
