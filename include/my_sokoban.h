/*
** EPITECH PROJECT, 2022
** my_sokoban
** File description:
** my_sokoban
*/

#ifndef my_sokoban_
    #define my_sokoban_
    #include <unistd.h>
    #include <stdlib.h>
    #include <fcntl.h>
    #include <ncurses.h>
    #include <string.h>
    #include <sys/types.h>
    #include <sys/stat.h>
    #include <criterion/criterion.h>
    #include <criterion/redirect.h>

int my_strlen(char const *str);
int my_putstr(char const *str);
int my_put_nbr(int nb);
void my_putchar(char c);
int redirect(int ar, char **av);
int start(char *map);
char **move_char(char **map, int c);
int *find_player(char **map);
char **alloc(char const *str);
char **split_str(char const *str);
int show_string_array(char *const *array);
char *load_file_in_mem(char const *filepath);
char *open_file(char *str);
char **verif_wall_x_l(char **map, int *coo);
char **verif_wall_x_r(char **map, int *coo);
char **verif_wall_y_u(char **map, int *coo);
char **verif_wall_y_d(char **map, int *coo);
char **move_left(char **map, int *coo);
char **move_right(char **map, int *coo);
char **move_down(char **map, int *coo);
char **move_up(char **map, int *coo);
char **verif_bar_x_l(char **map, int *coo);
char **verif_bar_x_r(char **map, int *coo);
char **verif_bar_y_u(char **map, int *coo);
char **verif_bar_y_d(char **map, int *coo);
int nbr_site(char *map);
int **find_site(char **map);
int find_nbr_site(char **map);
int **coo_bar(char **map);
int **hors_mouli(char **map);
int bar_block(char **map, int i, int k, int good);
int verif_bar(char **map, int i, int k, int error);
char **start_loop_print(char **map_tab);
int verif_bar_site(char **map, int **all_coo);
int **allo_int(int **all_coo, char **map);
char **respawn(char **map, int **all_coo, int nbr);
int count_array(char *const *array);
int break_loop(int c, char *map);
int find_nbr_bar(char **map);
int bar_block_ext(char **map);
int verif_map(char *map);
void free_coo(int **all_coo, char **map);
void free_tab(char **map);
void init_win(void);
void movements(int c, char **map_tab, int **all_coo, int nbr);
#endif /* !my_sokoban_ */
