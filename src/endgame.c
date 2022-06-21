/*
** EPITECH PROJECT, 2022
** endgame
** File description:
** endgame
*/

#include "my_sokoban.h"

int find_nbr_site_loop(char **map, int i, int nbr)
{
    for (int j = 0; map[i][j] != '\0'; j++) {
        if (map[i][j] == 'O') {
            nbr = nbr + 1;
        }
    }
    return (nbr);
}

int find_nbr_site(char **map)
{
    int nbr = 0;
    int cpy;

    for (int i = 0; map[i] != NULL; i++) {
        cpy = 0;
        cpy = find_nbr_site_loop(map, i, cpy);
        nbr = nbr + cpy;
    }
    return (nbr);
}

int verif_bar_site(char **map, int **all_coo)
{
    int nbr = find_nbr_site(map);
    int check = 0;
    int *coo = malloc(sizeof(int) * 2);

    for (int i = 0, check = 0; i != nbr; i++) {
        coo = all_coo[i];
        if (map[coo[0]][coo[1]] == 'X')
            check++;
    }
    if (check == nbr)
        return (1);
    return (0);
}
