/*
** EPITECH PROJECT, 2022
** for window
** File description:
** for window
*/

#include "my_sokoban.h"

void init_win(void)
{
    initscr();
    noecho();
    keypad(stdscr, TRUE);
    curs_set(0);
}

void movements(int c, char **map_tab, int **all_coo, int nbr)
{
    move_char(map_tab, c);
    respawn(map_tab, all_coo, nbr);
    start_loop_print(map_tab);
    usleep(100000);
}

void free_tab(char **map)
{
    for (int i = 0; map[i + 1] != NULL; i++) {
        free(map[i]);
    }
}

void free_coo(int **all_coo, char **map)
{
    int nbr = find_nbr_site(map);

    for (int i = 0; i < nbr; i++) {
        free(all_coo[i]);
    }
    free(all_coo);
}