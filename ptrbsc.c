/*
Author : R Sanket
Program : Prints out : Address of a variable a a pointer, 
          value of a variable and a pointer, and size of pointer. 
Date : 23rd February 2021
*/

#include <stdio.h>

int main(void)
{
    int number = 10;
    int *pnumber = NULL;

    number = 10;
    printf("number's address : %p\n", &number);
    printf("number's value : %d\n\n", number);

    pnumber = &number;

    printf("pnumber's adress : %p\n", (void*)&pnumber);
    printf("pnumber's size : %ld bytes\n", sizeof(pnumber));
    printf("pnumber's value : %p\n", pnumber);
    printf("value pointed to : %d\n", *pnumber);

    return 0;
}