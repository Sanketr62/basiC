/*
Author : R Sanket
Program : A demonstration for incrementing pointer values. 
Date : 23rd February 2021
*/

#include <stdio.h>

int main(void)
{
    long num1 = 0L; // L is to indicate it is long
    long num2 = 0L;
    long *pnum = NULL;

    pnum = &num1; //storing address of num1 in pointer
    *pnum = 2L; //value of variable which pointer is pointing to is now 2L i.e, num1 = 2L;
    ++num2; //increment num2 by 1, which means num2 = 1L;
    num2 += *pnum; //add num2 to pnum and store it in num2, which means, num2 = 1L + 2L;

    pnum = &num2; //store adress of num2 in pointer
    ++*pnum; //increment value of varaible which pointer is pointing to, i.e, num2 = 4L;

    printf(" num1 = %ld\n num2 = %ld\n *pnum = %ld\n *pnum + num2 = %ld\n ",num1, num2, *pnum, *pnum + num2);

    return 0;
}