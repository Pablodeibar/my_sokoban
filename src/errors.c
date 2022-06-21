/*
** EPITECH PROJECT, 2022
** errors
** File description:
** errors
*/

#include "my_sokoban.h"

int nbr_site(char *map)
{
    int barils = 0;
    int site = 0;

    for (int i = 0; map[i] != '\0'; i++) {
        if (map[i] == 'O')
            site++;
        if (map[i] == 'X')
            barils++;
    }
    if (site < barils)
        return (1);
    return (0);
}
