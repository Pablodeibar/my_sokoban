/*
** EPITECH PROJECT, 2022
** allcoo
** File description:
** allcoo
*/

#include "my_sokoban.h"

int **hors_mouli(char **map)
{
    int x = 0;
    int y = 0;
    int nbr = find_nbr_site(map);
    int *coo = malloc(sizeof(int) * 2);
    int **all_coo = malloc(sizeof(int) * nbr);

    for (int i = 0; i < nbr; i++) {
        all_coo[i] = malloc(sizeof(int) * 2);
    }
    for (int j = 0; j < nbr; j++) {
        for (int i = 0; map[i] != NULL; i++) {
            for (int k = 0; map[i][k] != '\0'; k++) {
                if (map[i][k] == 'O') {
                    x = k;
                    y = i;
                    all_coo[j][0] = y;
                    all_coo[j][1] = x;
                    j++;
                }
            }
        }
    }
    return (all_coo);
}

int **coo_bar_loop(char **map, int j, int i, int **all_coo)
{
    int x = 0;
    int y = 0;

    for (int k = 0; map[i][k] != '\0'; k++) {
        if (map[i][k] == 'O') {
            x = k;
            y = i;
            all_coo[j][0] = y;
            all_coo[j][1] = x;
            j++;
        }
    }
    return (all_coo);
}

int **coo_bar(char **map)
{
    int nbr = find_nbr_site(map);
    int **all_coo = malloc(sizeof(int) * nbr);

    for (int i = 0; i < nbr; i++) {
        all_coo[i] = malloc(sizeof(int) * 2);
    }
    for (int j = 0; j < nbr; j++) {
        for (int i = 0; map[i] != NULL; i++) {
            all_coo = coo_bar_loop(map, j, i, all_coo);
        }
    }
    return (all_coo);
}

int **allo_int(int **all_coo, char **map)
{
    int nbr = find_nbr_site(map);
    
    all_coo = malloc(sizeof(int) * nbr);
    for (int i = 0; i < nbr; i++) {
        all_coo[i] = malloc(sizeof(int) * 2);
    }
    return (all_coo);
}

int count_array(char *const *array)
{
    int i = 0;

    for (; array[i] != NULL; i++) {
    }
    return (i - 1);
}
