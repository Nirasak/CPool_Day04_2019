/*
** EPITECH PROJECT, 2019
** test_my_swap
** File description:
** test my_swap
*/

#include <criterion/criterion.h>

Test(my_swap, swap_two_integers)
{
    int a = 8;
    int b = 4;

    my_swap(&a, &b);
    cr_assert(a == 3);
    cr_assert(b == 8);
}
