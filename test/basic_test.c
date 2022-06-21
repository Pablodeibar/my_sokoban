/*
** EPITECH PROJECT, 2022
** test_basic
** File description:
** test_basic
*/

#include "my_sokoban.h"

void redirect_all_std(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}

Test(nbr_site, too_bar)
{
    char *map = open_file("test/map_error_bar");
    int nbr = nbr_site(map);
    cr_assert_eq(nbr, 1);
}

Test(nbr_site, not_too_bar)
{
    char *map = open_file("test/map_test");
    int nbr = nbr_site(map);
    cr_assert_eq(nbr, 0);
}

Test(split_str, basic, .init = redirect_all_std)
{
    char *map = open_file("test/map_test");
    char **map_tab = split_str(map);
    my_putstr(map_tab[0]);
    my_putstr(map_tab[1]);
    my_putstr(map_tab[2]);
    my_putstr(map_tab[3]);
    my_putstr(map_tab[4]);
    my_putstr(map_tab[5]);
    my_putstr(map_tab[6]);
    my_putstr(map_tab[7]);
    cr_assert_stdout_eq_str("############    P    ######     ## OO   O  ## X   X   ##     X   ##         ############");
}

Test(verif_bar, corners)
{
    char *map = open_file("test/map_test");
    char **map_tab = split_str(map);
    int nbr = verif_bar(map_tab, 1, 9, 0);
    cr_assert_eq(nbr, 1);
}

Test(verif_bar, not_corners)
{
    char *map = open_file("test/map_test");
    char **map_tab = split_str(map);
    int nbr = verif_bar(map_tab, 1, 8, 0);
    cr_assert_eq(nbr, 0);
}

Test(hors_mouli, coo_bar)
{
    char *map = open_file("test/map_test");
    char **map_tab = split_str(map);
    int **all_coo = hors_mouli(map_tab);

    cr_assert_eq(all_coo[0][0], 3);
    cr_assert_eq(all_coo[0][1], 2);
    cr_assert_eq(all_coo[1][0], 3);
    cr_assert_eq(all_coo[1][1], 3);
    cr_assert_eq(all_coo[2][0], 3);
    cr_assert_eq(all_coo[2][1], 7);
}

Test(allo_int, malloc_a_tab_coo)
{
    char *map = open_file("test/map_test");
    char **map_tab = split_str(map);
    int **all_coo = allo_int(all_coo, map_tab);

    all_coo[0][0] = 3;
    all_coo[0][1] = 2;
    all_coo[1][0] = 3;
    all_coo[1][1] = 3;
    all_coo[2][0] = 3;
    all_coo[2][1] = 7;

    cr_assert_eq(all_coo[0][0], 3);
    cr_assert_eq(all_coo[0][1], 2);
    cr_assert_eq(all_coo[1][0], 3);
    cr_assert_eq(all_coo[1][1], 3);
    cr_assert_eq(all_coo[2][0], 3);
    cr_assert_eq(all_coo[2][1], 7);
}

Test(verif_map, bad_map)
{
    char *map = open_file("test/map_bad");
    int nbr = verif_map(map);

    cr_assert_eq(nbr, 1);
}

Test(verif_map, good_map)
{
    char *map = open_file("test/map_test");
    int nbr = verif_map(map);

    cr_assert_eq(nbr, 0);
}
/*
Test(redirect, redi)
{
    int ar = 2;
    char **av;
    av = malloc(sizeof(int) * 1);
    for (int i = 0; i < 1; i++) {
        av[i] = malloc(sizeof(char) * 13);
    }
    av[1] = "test/map_test";
    int nbr = redirect(ar, av);

    cr_assert_eq(nbr, 0);
}
*/
/* TESTS MY_PUT (USELESS)*/

Test(my_putchar, ridiculous, .init = redirect_all_std)
{
    my_putchar('a');
    cr_assert_stdout_eq_str("a");
}

Test(my_put_nbr, ridiculous_nbr, .init = redirect_all_std)
{
    my_put_nbr(8);
    cr_assert_stdout_eq_str("8");
}

Test(my_put_nbr, ridiculous_nbr_2, .init = redirect_all_std)
{
    my_put_nbr(-8);
    cr_assert_stdout_eq_str("-8");
}

Test(my_put_nbr, ridiculous_nbr_3, .init = redirect_all_std)
{
    my_put_nbr(120);
    cr_assert_stdout_eq_str("120");
}

Test(my_strlen, ridiculous_len)
{
    char *test = "bonjour";
    int nbr = my_strlen(test);
    cr_assert_eq(nbr, 7);
}

/*
Test(count_array, count)
{
    char **map = split_str("test/map_test");
    int nbr = count_array(map);
    cr_assert_eq(nbr, 6);
}

Test(sokoban, check_player_position)
{
    struct sokoban_map *map;
    struct position *pos;
    map = make_map_from_string ("###########\n"\
                                "#         #\n"\
                                "#         #\n"\
                                "# PXO   ###\n"\
                                "#         #\n"\
                                "# OX      #\n"\
                                "###########\n");
    pos = get_player_position(map);
    cr_assert_neq(pos, NULL ) ;
    cr_assert_eq (pos->x, 2) ;
    cr_assert_eq (pos->y, 3) ;
    free(pos);
    free_map(map);
}
*/