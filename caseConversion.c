/*
Author : R Sanket
Program : Checks if two entered strings are matchng or not regardless of their case (case as in upper/lower)
Date : 6th February 2021
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char text[100]; //input buffer for string to be searched
    char substring [40]; //input buffer for string to be sought
    int i;

    printf("Enter the string to be searched (size less than %d characters)\n", 40);
    scanf("%s", text);
    
    printf("Enter the string to be sought (size less than %d characters)\n", 40);
    scanf("%s", substring);

    //convert both strings to uppercase
    for(i = 0; (text[i] = (char)toupper(text[i])) != 0; i++);
    for(i = 0; (substring[i] = (char)toupper(substring[i])); i++);

    printf("The second string %s found in the first.\n", ((strstr(text,substring)==NULL)?"was not":"was") );

    return 0;
}