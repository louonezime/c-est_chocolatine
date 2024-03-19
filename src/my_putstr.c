/*
** EPITECH PROJECT, 2022
** my_putstr
** File description:
** c
*/

#include "fizzbuzz.h"

int my_putstr(char const *str)
{
    int i = 0;

    while (str[i] != '\0'){
        my_putchar(str[i]);
        i++;
    }
    return 0;
}
