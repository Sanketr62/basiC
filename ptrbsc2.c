/*
Author : R Sanket
Program : Prints out : Address of a variable a a pointer, 
          value of a variable and a pointer, and size of pointer. 
Date : 23rd February 2021nd
*/

#include <stdio.h>

int main(void)
{
    int a = 10;
    int *ptr = NULL;

    ptr = &a;

    printf("The address of a is : %p\n", &a);
    printf("The Address of the pointer is : %p\n", &ptr);
    printf("The value of the pointer : %p\n", ptr);
    printf("The value of what pointer is pointing to : %d\n", *ptr);

    return 0;
}