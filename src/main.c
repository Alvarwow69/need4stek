/*
** EPITECH PROJECT, 2020
** main.c
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

char *stop_sim(void)
{
    char *buffer = NULL;
    size_t size = 0;

    my_put_str("stop_simulation\n", 1);
    getline(&buffer, &size, stdin);
    return (buffer);
}

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

char *get_lidar_info(void)
{
    char *buffer = NULL;
    size_t size = 0;

    my_put_str("get_info_lidar\n", 1);
    getline(&buffer, &size, stdin);
    return (buffer);
}

void reach_position()
{
    char *info = NULL;
    char **parsed = NULL;
    float average = 3000;

    while(average > 900) {
        average = 0;
        info = get_lidar_info();
        parsed = my_str_to_word_array(info , ':');
        for (int i = 2; i < 34; i++)
            average += (float)atof(parsed[i]);
        average /= 32;
    }
    forward(0);
    cycle(100);
}

int main(void)
{
    char *buffer = NULL;
    size_t size = 0;

    my_put_str(start_sim(), 2);
    my_put_str(forward(0.2f), 2);
    reach_position();
    my_put_str(stop_sim(), 2);
    return (0);
}