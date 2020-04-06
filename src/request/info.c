/*
** EPITECH PROJECT, 2020
** info.c
** File description:
** 
*/

#include "n4s.h"

char *get_lidar_info(void)
{
    char *buffer = NULL;
    size_t size = 0;

    my_put_str("get_info_lidar\n", 1);
    getline(&buffer, &size, stdin);
    return (buffer);
}

char *get_time(void)
{
    char *buffer = NULL;
    size_t size = 0;

    my_put_str("get_info_stime\n", 1);
    getline(&buffer, &size, stdin);
    return (buffer);
}