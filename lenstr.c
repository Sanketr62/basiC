/*
Author : R Sanket
Program : Calculates the length of the entered string without using strlen() function
Date : 6th February 2021
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h> //add this library for 'true' value to be identified in while loop

int main()
{
    char str1[100]; //input string array
    int i = 0; //loop variable
    int count = 0; //counter for the number of characters in our string

    printf("Enter the string you want to calculate (size less than %d)\n", 100);
    scanf("%s", str1);

    while (str1[i] != '\0') //count until it reaches null terminator
    {
        ++i;
        ++count;
    }
    
    printf("The length of the entered string is %d\n", count);

    return 0;
}