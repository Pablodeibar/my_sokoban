/*
** EPITECH PROJECT, 2022
** for files
** File description:
** for files
*/

#include "my_sokoban.h"

int show_string_array(char *const *array)
{
    int i = 0;

    for (; array[i] != NULL; i++) {
        my_putstr(array[i]);
        my_putchar('\n');
    }
    return (0);
}

char *open_file(char *str)
{
    int i = open(str, O_RDONLY);
    char *buffer;
    struct stat sb_dt;

    stat(str, &sb_dt);
    buffer = malloc(sizeof(char) * sb_dt.st_size);
    read(i, buffer, sb_dt.st_size);
    close(i);
    return buffer;
}
