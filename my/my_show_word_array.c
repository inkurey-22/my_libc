/*
** EPITECH PROJECT, 2024
** B-CPE-100-LIL-1-1-cpoolday08-theophile.riffe
** File description:
** show_word_array
*/

#include "my_libc.h"

int my_show_word_array(char *const *tab)
{
    for (int i = 0; tab[i] != NULL; i++){
        my_putstr(tab[i]);
        my_putchar('\n');
    }
    return 0;
}
