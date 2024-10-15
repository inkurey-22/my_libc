/*
** EPITECH PROJECT, 2024
** B-CPE-100-LIL-1-1-cpoolday08-theophile.riffe
** File description:
** my.h
*/

#ifndef MY_H_
 #define MY_H_

    #define BUFF_SIZE 30720

    #include <unistd.h>
    #include <limits.h>
    #include <stdlib.h>
    #include <fcntl.h>
    #include <stdio.h>

// Character/Output Functions
void my_putchar(char);
void my_putstr(char const *);
int my_put_nbr(int);
void my_puterr(char const *);

// String Length/Comparison Functions
int my_strlen(char const *);
int my_strcmp(char const *, char const *);
int my_strncmp(char const *, char const *, int n);
int my_isalnum(char);

// String Manipulation Functions
char *my_strcat(char *, char const *);
char *my_strncat(char *, char const *, int n);
char *my_strcpy(char *, char const *);
char *my_strncpy(char *, char const *, int n);
char *my_revstr(char *);
char *my_strstr(char *, char const *);
char *my_strdup(char const *);

// String Case Functions
char *my_strcapitalize(char *);
char *my_strlowcase(char *);
char *my_strupcase(char *);

// String Property Functions
int my_str_isalpha(char const *);
int my_str_islower(char const *);
int my_str_isnum(char const *);
int my_str_isprintable(char const *);
int my_str_isupper(char const *);

// Number-related Functions
int my_getnbr(char const *);
int my_compute_power_rec(int, int);
int my_compute_square_root(int);
int my_find_prime_sup(int);
int my_is_prime(int);
int my_isneg(int);

// Array/Sorting Functions
void my_sort_int_array(int *, int);
void my_swap(int *, int *);

// Miscellaneous Functions
int my_showmem(char const *, int);
int my_showstr(char const *);

// Double array Functions
char **split_string(char const *, char const *);
int my_show_word_array(char *const *);

#endif /* !MY_H_ */
