/*
** EPITECH PROJECT, 2020
** n4s.h
** File description:
** 
*/

#ifndef NEED4STEK_N4S
#define NEED4STEK_N4S

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

//AI
char *start_sim(void);
char *stop_sim(void);
char *forward(float speed);
char *backward(float speed);
char *turn(float value);
char *get_lidar_info(void);
char *cycle(int nbr_cycle);
char *get_time(void);


//utils
int my_put_str(char *str, int channel);
char *clean_str(char *str);
char *my_str_dup(char const *src);
int start_with(char const *str, char const *start);
int search_n_match(char const *str, char const *match);
char **my_str_to_word_array(char const *str, char sep);
char *my_str_cat(char const *dest, char const *src);
int my_str_len(char const *str);
int compare(char const *str1, char const *str2);
int my_put_nbr(int nb);

#endif //NEED4STEK_N4S
