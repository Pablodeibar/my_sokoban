/*
** EPITECH PROJECT, 2022
** game
** File description:
** game
*/

#include "my_sokoban.h"

int *find_play_loop(char **map, int i)
{
    int x = 0;
    int y = 0;
    int *coo;

    for (int j = 0; map[i][j] != '\0'; j++) {
        if (map[i][j] == 'P') {
            x = j;
            y = i;
        }
    }
    coo = malloc(sizeof(int) * 2);
    coo[1] = x;
    coo[0] = y;
    return (coo);
}

int *find_player(char **map)
{
    int *coo = malloc(sizeof(int) * 2);

    for (int i = 0; map[i] != NULL; i++) {
        coo = find_play_loop(map, i);
        if (coo[0] == 0 && coo[1] == 0);
        else {
            return (coo);
        }
    }
}

int break_loop(int c, char *map)
{
    if (c == 32) {
        start(map);
        return (1);
    }
    if (c == 108)
        return (1);
    return (0);
}

void free_all(char **map_tab, int **all_coo, char *map)
{
    endwin();
    free_coo(all_coo, map_tab);
}

int start(char *map)
{
    char **map_tab = split_str(map);
    int **all_coo = allo_int(all_coo, map_tab);
    
    all_coo = hors_mouli(map_tab);
    init_win();
    start_loop_print(map_tab);
    for (int c, nbr = find_nbr_site(map_tab); 1; c = getch()) {
        movements(c, map_tab, all_coo, nbr);
        if (verif_bar_site(map_tab, all_coo) == 1 || break_loop(c, map) == 1)
            break;
        if (bar_block_ext(map_tab) == 1) {
            free_all(map_tab, all_coo, map);
            return (1);
        }
    }
    free_all(map_tab, all_coo, map);
    return (0);
}
