/*
** EPITECH PROJECT, 2020
** my_h lib
** File description:
** this file is a .h which points to my libMy
*/

#ifndef MY_H_
#define MY_H_

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

#define min(a, b) (a < b) ? a : b
#define max(a, b) (a > b) ? a : b
#define help(a) (a[0] == '-' && a[1] == 'h') ? 1 : 0
#define btw(a, b, c) (a < b && b < c) ? 1 : 0
#define btwe(a, b, c) (a <= b && b <= c) ? 1 : 0

typedef char * string;
typedef char * str;

typedef enum {
    false,
    true
} bool;

int my_compute_power_rec(int, int);
int my_compute_square_root(int);
int my_find_prime_sup(int);
int my_is_prime(int);
int my_getnbr(char const *);
int my_isneg(int);
int my_putchar(char);
int my_put_nbr(int);
int my_putstr(char const *);
char *my_revstr(char *);
int my_showmem(char const *, int);
int my_showstr(char const *);
void my_sort_int_array(int *, int);
void m_two(int *, int);
char *my_strcat(char *, char const *);
int my_strcmp(char const *, char const *);
char *my_strcpy(char *, char const *);
int my_str_isalpha(char const *);
int my_str_islower(char const *);
int my_str_isnum(char const *);
int my_str_isprintable(char const *);
int my_str_isupper(char const *);
int my_strlen(char const *);
char *my_strlowcase(char *);
char *my_strncat(char *, char const *, int);
int my_strncmp(char const *, char const *, int);
char *my_strncpy(char *, char const *, int);
char *my_strstr(char *, char const *);
char *my_strupcase(char *);
int my_swap(int *, int *);
int my_show_word_array(char * const *);
int my_puterror(char const *);
int my_put_long(long);
int my_printf(const char *, ...);
int my_dec_to_base(int, int);
int my_put_float(float);
int my_dec_to_base_up(int, int);
int my_str_to_char(char *);
int print_s(char const *);
int my_print_ptr(int);
char *my_char_to_str(char);
int my_putcharn(int);
int contains(char *str, char *con);
string input(void);
string inputs(char *str);
char *my_itos(int nb);
string *my_str_to_word_array(string);

// listes

typedef struct listElement {
    int value;
    struct listElement *next;
} *list;

list new_list(void);
int list_len(list l);
int is_list_empty(list l);
list list_append(list l, int x);
void print_list(list l);
list list_appbeg(list l, int x);
list list_dellast(list l);
list list_delfirst(list l);
list list_clear(list l);

#endif /*MY_H_*/
