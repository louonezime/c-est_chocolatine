/*
** EPITECH PROJECT, 2023
** main
** File description:
** c
*/

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

#include "fizzbuzz.h"

int check_arg(char *arg_1)
{
    for (int i = 0; arg_1[i] != '\0'; i++){
        if (arg_1[i] >= '0' && arg_1[i] <= '9')
            return 84;
    }
    return 0;
}

int main(int argc, char **argv)
{
    int a;
    int b;

    if (argc != 3)
        return 84;
    if (check_arg(argv[1]) != 84 || check_arg(argv[2]) != 84)
        return 84;
    a = atoi(argv[1]);
    b = atoi(argv[2]);
    if (b < a){
        write(2, "Error: second parameter must be greater than first.\n", 53);
        return 84;
    }
    fizzbuzz(a, b);
    return 0;
}
