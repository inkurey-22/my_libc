/*
** EPITECH PROJECT, 2024
** my_libc
** File description:
** my_putstr
*/

#include "my_libc.h"

void my_putstr(char const *str)
{
    if (str == NULL)
        return;
    write(1, str, my_strlen(str));
}
