/*
** EPITECH PROJECT, 2020
** main
** File description:
** clear string
*/

#include "n4s.h"

char print_space(int i, char const *str)
{
    if (i > 0 && str[i - 1] != '\t' &&
        str[i - 1] != ' ' && str[i + 1] != '\0')
        return (' ');
    return ('\0');
}

char *clean_str(char *str)
{
    char *output = NULL;
    int len = 0;
    int index = 0;

    if (!str)
        return (NULL);
    for (len = 0; str[len] != '\0' && str[len] != '\n'; len++);
    output = malloc(sizeof(char) * (len + 1));
    for (int i = 0; i <= len; i++)
        output[i] = '\0';
    for (int i = 0; str[i] != '\0' && str[i] != '\n'; i++) {
        if (str[i] == '\t' || str[i] == ' ') {
            output[index] = print_space(i, str);
            index = (output[index] == ' ') ? index + 1 : index;
            continue;
        }
        output[index] = str[i];
        index += 1;
    }
    return (output);
}