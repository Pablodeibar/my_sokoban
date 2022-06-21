/*
** EPITECH PROJECT, 2022
** window
** File description:
** windo
*/

#include "my_sokoban.h"

void redirect_all_std(void);

Test(break_loop, l)
{
    char *map = open_file("test/map_error_bar");
    int nbr = break_loop(108, map);
    cr_assert_eq(nbr, 1);
}

Test(break_loop, no_case)
{
    char *map = open_file("test/map_error_bar");
    int nbr = break_loop(10, map);
    cr_assert_eq(nbr, 0);
}

Test(find_player, regular_case)
{
    char *map = open_file("test/map_test");
    char **map_tab = split_str(map);
    int *coo = find_player(map_tab);
    cr_assert_eq(coo[0], 1);
    cr_assert_eq(coo[1], 5);
}

Test(find_nbr_bar, 3_bars)
{
    char *map = open_file("test/map_test");
    char **map_tab = split_str(map);
    int *coo = malloc(sizeof(int) * 2);

    coo[0] = 5;
    coo[1] = 7;
    map_tab = verif_bar_x_l(map_tab, coo);

    cr_assert_eq(map_tab[5][5], 'X');
}

Test(respawn, simple)
{
    char *map = open_file("test/map_win");
    char **map_tab = split_str(map);
    int **all_coo = malloc(sizeof(int) * 2);;

    for (int i = 0; i < 2; i++) {
        all_coo[i] = malloc(sizeof(int) * 2);
    }

    all_coo[0][0] = 1;
    all_coo[0][1] = 1;
    all_coo[1][0] = 1;
    all_coo[1][1] = 2;

    map_tab = respawn(map_tab, all_coo, 2);

    cr_assert_eq(map_tab[1][1], 'O');
    cr_assert_eq(map_tab[1][2], 'O');
}
