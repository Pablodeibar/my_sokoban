/*
** EPITECH PROJECT, 2022
** main
** File description:
** main
*/

#include "my_sokoban.h"

int main(int ar, char **av)
{
    if ((ar == 2) && av[1][0] == '-' && av[1][1] == 'h') {
        my_putstr("USAGE\n\t./my_sokoban map\nDESCRIPTION\n\tmap file "
        "representing the warehouse map, containing '#' for walls,\n\t\t"
        "'P' for the player, 'X' for boxes and 'O' for storage locations.\n");
    }
    else if (ar == 2) {
        return (redirect(ar, av));
    } else
        return (84);
}
