/*
Author : R Sanket
Program : Concatenates(merges) two strings
Date : 5th February 2021
*/

#include <stdio.h>
#include <string.h>

int main()
{
    char src[50], dest [50];

    strcpy(src, "This is source");
    strcpy(dest, "This is destination");

    strncat(dest, src, 15);

    printf("Final destination string : |%s|\n", dest);

    return 0;
}