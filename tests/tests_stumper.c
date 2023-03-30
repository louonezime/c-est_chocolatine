/*
** EPITECH PROJECT, 2023
** unit
** File description:
** tests
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>

#include "fizzbuzz.h"

void redirect_all_std(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}

Test(fizzbuzz, output, .init = redirect_all_std)
{
    int a = 10;
    int b = 15;
    fizzbuzz(a, b);
    cr_assert_stdout_eq_str("Buzz\n11\nFizz\n13\n14\nFizzBuzz\n");
}

Test(fizzbuzz2, output, .init = redirect_all_std)
{
    style_fix(5);
    cr_assert_stdout_eq_str("Buzz\n");
}

Test(lib, output, .init = redirect_all_std)
{
    my_put_nbr(5);
    cr_assert_stdout_eq_str("5");
}

Test(lib2, output, .init = redirect_all_std)
{
    my_put_nbr(-15);
    cr_assert_stdout_eq_str("-15");
}

Test(fizzbuzz3, output, .init = redirect_all_std)
{
    fizzbuzz(5, 5);
    cr_assert_stdout_eq_str("Buzz\n");
}

Test(last, output, .init = redirect_all_std)
{
    my_putchar('a');
    cr_assert_stdout_eq_str("a");
}
