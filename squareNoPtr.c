/*
Author : R Sanket
Program : Squaring a number using pass by reference
Date : 28th February 2021
*/

#include <stdio.h>
#include <string.h>

int square(int *x)
{
    int temp;

    temp = *x;
    *x *= temp;
}

int main(void)
{
    int a = 5;

    printf("Number : %d\n", a);

    square(&a);

    printf("Square of 5: %d\n", a);

    return 0;
}