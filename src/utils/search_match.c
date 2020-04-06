/*
** EPITECH PROJECT, 2020
** search_match.c
** File description:
** 
*/

int search_n_match(char const *str, char const *match)
{
    int result = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        for (int s = 0; match[s] != '\0'; s++) {
            if (str[i + s] != match[s])
                break;
            else if (match[s + 1] == '\0')
                result += 1;
        }
    }
    return (result);
}

int start_with(char const *str, char const *start)
{
    for (int i = 0; start[i] != '\0'; i++) {
        if (str[i] != start[i])
            return (0);
    }
    return (1);
}