/*
Author : R Sanket
Program : copies characters from one string to another
Date : 5th February 2021
*/

#include <stdio.h>
#include <string.h>

int main()
{
    char myString[] = "My name is Sanket";
    char temp[50];

    strncpy(temp, myString, sizeof(temp) - 1);

    printf("The string is: %s", temp);

    return 0;
}