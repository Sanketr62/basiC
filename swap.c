/*
Author : R Sanket
Program : swapping values of variables
Date : 28th February 2021
*/

#include <stdio.h>
#include <string.h>

int swap(int *x, int *y)
{
    int temp;

    temp = *x; //save value of x in temp
    *x = *y; // put value of y in x
    *y = temp; //put value of temp in y
}

int main(void)
{
    int a = 100;
    int b = 200;

    printf("Value of a before swapping : %d\n", a);
    printf("Value of b before swapping : %d\n", b);

    //call swap function to swap values
    swap(&a, &b);

    printf("Value of a after swapping : %d\n", a);
    printf("Value of b after swapping : %d\n", b);
    
    return 0;
}