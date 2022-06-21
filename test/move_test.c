/*
** EPITECH PROJECT, 2022
** move
** File description:
** move
*/

#include "my_sokoban.h"

Test(verif_bar_x_l, regular_bars)
{
    char *map = open_file("test/map_test");
    char **map_tab = split_str(map);
    int *coo = malloc(sizeof(int) * 2);

    coo[0] = 5;
    coo[1] = 8;
    map_tab = verif_bar_x_l(map_tab, coo);

    cr_assert_eq(map_tab[5][7], 'P');
}

Test(verif_bar_x_l, regular_bars_2)
{
    char *map = open_file("test/map_for_move");
    char **map_tab = split_str(map);
    int *coo = malloc(sizeof(int) * 2);

    coo[0] = 4;
    coo[1] = 3;
    map_tab = verif_bar_x_l(map_tab, coo);

    cr_assert_eq(map_tab[4][2], 'P');
}

Test(verif_bar_x_r, regular_bars)
{
    char *map = open_file("test/map_test");
    char **map_tab = split_str(map);
    int *coo = malloc(sizeof(int) * 2);

    coo[0] = 3;
    coo[1] = 5;
    map_tab = verif_bar_x_r(map_tab, coo);

    cr_assert_eq(map_tab[3][6], 'P');
}

Test(verif_bar_x_r, regular_bars_2)
{
    char *map = open_file("test/map_for_move");
    char **map_tab = split_str(map);
    int *coo = malloc(sizeof(int) * 2);

    coo[0] = 4;
    coo[1] = 1;
    map_tab = verif_bar_x_r(map_tab, coo);

    cr_assert_eq(map_tab[4][2], 'P');
}

Test(verif_bar_y_d, regular_bars)
{
    char *map = open_file("test/map_test");
    char **map_tab = split_str(map);
    int *coo = malloc(sizeof(int) * 2);

    coo[0] = 1;
    coo[1] = 7;
    map_tab = verif_bar_y_d(map_tab, coo);

    cr_assert_eq(map_tab[2][7], 'P');
}

Test(verif_bar_y_d, regular_bars_2)
{
    char *map = open_file("test/map_for_move");
    char **map_tab = split_str(map);
    int *coo = malloc(sizeof(int) * 2);

    coo[0] = 4;
    coo[1] = 6;
    map_tab = verif_bar_y_d(map_tab, coo);

    cr_assert_eq(map_tab[5][6], 'P');
}

Test(verif_bar_y_u, regular_bars)
{
    char *map = open_file("test/map_test");
    char **map_tab = split_str(map);
    int *coo = malloc(sizeof(int) * 2);

    coo[0] = 5;
    coo[1] = 2;
    map_tab = verif_bar_y_u(map_tab, coo);

    cr_assert_eq(map_tab[4][2], 'P');
}

Test(verif_bar_y_u, regular_bars_2)
{
    char *map = open_file("test/map_for_move");
    char **map_tab = split_str(map);
    int *coo = malloc(sizeof(int) * 2);

    coo[0] = 6;
    coo[1] = 6;
    map_tab = verif_bar_y_u(map_tab, coo);

    cr_assert_eq(map_tab[5][6], 'P');
}

/* COLLISIONS*/

Test(verif_wall_x_l, wall)
{
    char *map = open_file("test/map_for_wall");
    char **map_tab = split_str(map);
    int *coo = malloc(sizeof(int) * 2);

    coo[0] = 5;
    coo[1] = 1;
    map_tab = verif_wall_x_l(map_tab, coo);

    cr_assert_eq(map_tab[5][1], 'P');
}

Test(verif_wall_x_l, two_barrils)
{
    char *map = open_file("test/map_for_wall");
    char **map_tab = split_str(map);
    int *coo = malloc(sizeof(int) * 2);

    coo[0] = 1;
    coo[1] = 8;
    map_tab = verif_wall_x_l(map_tab, coo);

    cr_assert_eq(map_tab[1][8], 'P');
}

Test(verif_wall_x_l, wall_and_barrils)
{
    char *map = open_file("test/map_for_wall");
    char **map_tab = split_str(map);
    int *coo = malloc(sizeof(int) * 2);

    coo[0] = 1;
    coo[1] = 2;
    map_tab = verif_wall_x_l(map_tab, coo);

    cr_assert_eq(map_tab[1][2], 'P');
}

Test(verif_wall_x_r, wall)
{
    char *map = open_file("test/map_for_wall");
    char **map_tab = split_str(map);
    int *coo = malloc(sizeof(int) * 2);

    coo[0] = 3;
    coo[1] = 9;
    map_tab = verif_wall_x_r(map_tab, coo);

    cr_assert_eq(map_tab[3][9], 'P');
}

Test(verif_wall_x_r, two_barrils)
{
    char *map = open_file("test/map_for_wall");
    char **map_tab = split_str(map);
    int *coo = malloc(sizeof(int) * 2);

    coo[0] = 1;
    coo[1] = 5;
    map_tab = verif_wall_x_r(map_tab, coo);

    cr_assert_eq(map_tab[1][5], 'P');
}

Test(verif_wall_x_r, wall_and_barrils)
{
    char *map = open_file("test/map_for_wall");
    char **map_tab = split_str(map);
    int *coo = malloc(sizeof(int) * 2);

    coo[0] = 4;
    coo[1] = 8;
    map_tab = verif_wall_x_r(map_tab, coo);

    cr_assert_eq(map_tab[4][8], 'P');
}

Test(verif_wall_y_d, wall)
{
    char *map = open_file("test/map_for_wall");
    char **map_tab = split_str(map);
    int *coo = malloc(sizeof(int) * 2);

    coo[0] = 6;
    coo[1] = 8;
    map_tab = verif_wall_y_d(map_tab, coo);

    cr_assert_eq(map_tab[6][8], 'P');
}

Test(verif_wall_y_d, two_barrils)
{
    char *map = open_file("test/map_for_wall");
    char **map_tab = split_str(map);
    int *coo = malloc(sizeof(int) * 2);

    coo[0] = 4;
    coo[1] = 6;
    map_tab = verif_wall_y_d(map_tab, coo);

    cr_assert_eq(map_tab[4][6], 'P');
}

Test(verif_wall_y_d, wall_and_barrils)
{
    char *map = open_file("test/map_for_wall");
    char **map_tab = split_str(map);
    int *coo = malloc(sizeof(int) * 2);

    coo[0] = 5;
    coo[1] = 4;
    map_tab = verif_wall_y_d(map_tab, coo);

    cr_assert_eq(map_tab[5][4], 'P');
}

Test(verif_wall_y_u, wall)
{
    char *map = open_file("test/map_for_wall");
    char **map_tab = split_str(map);
    int *coo = malloc(sizeof(int) * 2);

    coo[0] = 1;
    coo[1] = 2;
    map_tab = verif_wall_y_u(map_tab, coo);

    cr_assert_eq(map_tab[2][6], 'P');
}

Test(verif_wall_y_u, two_barrils)
{
    char *map = open_file("test/map_for_wall");
    char **map_tab = split_str(map);
    int *coo = malloc(sizeof(int) * 2);

    coo[0] = 3;
    coo[1] = 7;
    map_tab = verif_wall_y_u(map_tab, coo);

    cr_assert_eq(map_tab[3][7], 'O');
}

Test(verif_wall_y_u, wall_and_barrils)
{
    char *map = open_file("test/map_for_wall");
    char **map_tab = split_str(map);
    int *coo = malloc(sizeof(int) * 2);

    coo[0] = 2;
    coo[1] = 6;
    map_tab = verif_wall_y_u(map_tab, coo);

    cr_assert_eq(map_tab[2][6], 'P');
}