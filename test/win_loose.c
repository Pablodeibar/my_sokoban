/*
** EPITECH PROJECT, 2022
** loose
** File description:
** loose
*/

#include "my_sokoban.h"

void redirect_all_std(void);

Test(bar_block_ext, loose)
{
    char *map = open_file("test/map_loose");
    char **map_tab = split_str(map);
    int nbr = bar_block_ext(map_tab);
    cr_assert_eq(nbr, 1);
}

Test(bar_block_ext, dont_loose)
{
    char *map = open_file("test/map_test_spawn");
    char **map_tab = split_str(map);
    int nbr = bar_block_ext(map_tab);
    cr_assert_eq(nbr, 0);
}

Test(verif_bar_site, win)
{
    char *map = open_file("test/map_win");
    char **map_tab = split_str(map);
    int **all_coo;

    all_coo = malloc(sizeof(int) * 2);
    for (int i = 0; i < 2; i++) {
        all_coo[i] = malloc(sizeof(int) * 2);
    }

    all_coo[0][0] = 4;
    all_coo[0][1] = 2;
    all_coo[1][0] = 5;
    all_coo[1][1] = 6;

    int nbr = verif_bar_site(map_tab, all_coo);
    cr_assert_eq(nbr, 1);
}

Test(verif_bar_site, not_win)
{
    char *map = open_file("test/map_win");
    char **map_tab = split_str(map);
    int **all_coo;

    all_coo = malloc(sizeof(int) * 2);
    for (int i = 0; i < 2; i++) {
        all_coo[i] = malloc(sizeof(int) * 2);
    }

    all_coo[0][0] = 4;
    all_coo[0][1] = 2;
    all_coo[1][0] = 5;
    all_coo[1][1] = 7;

    int nbr = verif_bar_site(map_tab, all_coo);
    cr_assert_eq(nbr, 1);
}
