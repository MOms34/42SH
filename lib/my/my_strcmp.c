/*
** EPITECH PROJECT, 2021
** strcmp
** File description:
** .
*/

#include <stddef.h>

int my_strlen(char const *str);

int my_strcmp(char const *s1, char const *s2)
{
    if (my_strlen(s1) != my_strlen(s2))
        return (1);
    else if (s1 == NULL)
        return (1);
    for (int i = 0; s1[i] != '\0' && s2[i] != '\0'; i++) {
        if (s1[i] != s2[i])
            return (1);
    }
    return (0);
}
