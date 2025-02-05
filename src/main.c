/*
** EPITECH PROJECT, 2020
** main.c
** File description:
** 
*/

#include "n4s.h"

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
    my_put_str(start_sim(), 2);
    my_put_str(forward(0.2f), 2);
    reach_position();
    my_put_str(stop_sim(), 2);
    return (0);
}