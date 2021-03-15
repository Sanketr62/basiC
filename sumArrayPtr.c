/*
Author : R Sanket
Program : Calculates the sum of all elements present in an array of size 10. 
Date : 28th February 2021
*/

#include <stdio.h>

int arraySum (int array[], const int n) //initializing an empty array and a constant integer n 
{
    int sum = 0, *ptr; //initializing sum to be 0 and a pointer
    int * const arrayEnd = array + n; //creating a constant array pointing to array + n : means it is constantly pointing to the end of the array

    for ( ptr = array; ptr < arrayEnd; ++ptr) //add 'value of array which pointer ptr is pointing to' and 'sum' and store it in sum.
                                              //Do this only when ptr is initialzed to array's first element and ptr is less than arrayEnd(arrayEnd is the address of final element of array)
    {
        sum += *ptr;
    }

    return sum;
}

int main(void)
{
    int arraySum (int array[], const int n);
    int values[10] = {3, 7, -9, 3, 6, -1, 7, 9, 1, -5}; //create an array of size 10 and add values

    printf("The sum is %i\n", arraySum(values, 10)); //print the sum by calling arraySum and passing variables

    return 0;
}