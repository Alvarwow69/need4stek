/*
** EPITECH PROJECT, 2020
** move.c
** File description:
** 
*/

#include "n4s.h"

char *forward(float speed)
{
    char *buffer = NULL;
    char sp[5];
    size_t size = 0;

    if (speed < 0 || speed > 1)
        return (NULL);
    my_put_str("car_forward:", 1);
    my_put_str(gcvt(speed, 2, sp), 1);
    my_put_str("\n", 1);
    getline(&buffer, &size, stdin);
    return (buffer);
}

char *backward(float speed)
{
    char *buffer = NULL;
    char sp[5];
    size_t size = 0;

    if (speed < 0 || speed > 1)
        return (NULL);
    my_put_str("car_backward:", 1);
    my_put_str(gcvt(speed, 2, sp), 1);
    my_put_str("\n", 1);
    getline(&buffer, &size, stdin);
    return (buffer);
}

char *turn(float value)
{
    char *buffer = NULL;
    char sp[5];
    size_t size = 0;

    if (value < -1|| value > 1)
        return (NULL);
    my_put_str("car_forward:", 1);
    my_put_str(gcvt(value, 2, sp), 1);
    my_put_str("\n", 1);
    getline(&buffer, &size, stdin);
    return (buffer);
}
