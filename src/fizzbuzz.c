/*
** EPITECH PROJECT, 2023
** bi
** File description:
** fi
*/

#include <stdio.h>

#include "fizzbuzz.h"

int style_fix(int i)
{
    int a = 0;
    if (i % 3 == 0 && i % 5 != 0)
        my_putstr("Fizz\n");
    if (i % 3 == 0 && i % 5 == 0)
        my_putstr("FizzBuzz\n");
    if (i % 5 == 0 && i % 3 != 0)
        my_putstr("Buzz\n");
    if (i % 5 != 0 && i % 3 != 0){
        my_put_nbr(i);
        my_putchar('\n');
    }

    return 0;
}

int fizzbuzz(int a, int b)
{
    for (int i = a; i <= b; i++){
        style_fix(i);
    }
    return 0;
}
