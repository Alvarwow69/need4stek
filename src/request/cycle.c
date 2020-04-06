/*
** EPITECH PROJECT, 2020
** cycle.c
** File description:
** 
*/

#include "n4s.h"

char *cycle(int nbr_cycle)
{
    char *buffer = NULL;
    size_t size = 0;

    my_put_str("CYCLE_WAIT:", 1);
    my_put_nbr(nbr_cycle);
    my_put_str("\n", 1);
    getline(&buffer, &size, stdin);
    return (buffer);
}