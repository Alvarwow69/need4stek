/*
** EPITECH PROJECT, 2019
** my_put_nbr.c
** File description:
** print the int n parameter
*/

#include "n4s.h"

void print_nbr(long int reverse)
{
    int printed = 1;
    char c = '\0';

    while (reverse >= 10) {
        printed = reverse % 10;
        reverse /= 10;
        c = printed + 48;
        write(1, &c, 1);
    }
}

int my_put_nbr(int nb)
{
    short int lastdigit;
    long int reverse = 1;

    if (nb == 0) {
        write(1, "0", 1);
        return (0);
    }
    if (nb < 0) {
        nb *= -1;
        write(1, "-", 1);
    }
    while (nb > 0) {
        lastdigit = nb % 10;
        reverse *= 10;
        reverse += lastdigit;
        nb /= 10;
    }
    print_nbr(reverse);
    return (0);
}
