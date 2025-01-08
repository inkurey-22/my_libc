/*
** EPITECH PROJECT, 2025
** my_libc
** File description:
** atof
*/

#include <stdlib.h>

#include "my_numbers.h"

#include <stdio.h>
#include <stdbool.h>

int get_sign(const char *str, int *i)
{
    int sign = 1;

    while (str[*i] == ' ')
        (*i)++;
    if (str[*i] == '-' || str[*i] == '+') {
        if (str[*i] == '-') {
            sign = -1;
        }
        (*i)++;
    }
    return sign;
}

double my_atof(const char *str)
{
    double result = 0.0;
    double fraction = 0.0;
    int i = 0;
    bool has_fraction = false;
    double fraction_divisor = 1.0;
    int sign = get_sign(str, &i);

    for (; str[i] >= '0' && str[i] <= '9'; i++)
        result = result * 10.0 + (str[i] - '0');
    if (str[i] == '.') {
        i++;
        has_fraction = true;
        for (; str[i] >= '0' && str[i] <= '9'; i++) {
            fraction = fraction * 10.0 + (str[i] - '0');
            fraction_divisor *= 10.0;
        }
    }
    if (has_fraction)
        result += fraction / fraction_divisor;
    return result * sign;
}
