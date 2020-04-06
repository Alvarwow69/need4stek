/*
** EPITECH PROJECT, 2020
** simulation.c
** File description:
** 
*/

#include "n4s.h"

char *start_sim(void)
{
    char *buffer = NULL;
    size_t size = 0;

    my_put_str("start_simulation\n", 1);
    getline(&buffer, &size, stdin);
    return (buffer);
}

char *stop_sim(void)
{
    char *buffer = NULL;
    size_t size = 0;

    my_put_str("stop_simulation\n", 1);
    getline(&buffer, &size, stdin);
    return (buffer);
}