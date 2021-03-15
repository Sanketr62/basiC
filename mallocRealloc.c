/*
Author : R Sanket
Program : Demo of using malloc and Realloc
Date : 28th February 2021
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char * str = NULL;

    str = (char *) malloc(15 * sizeof(char));
    strcpy (str, "Sanket");
    printf("String = %s, Address = %p \n", str, str);

    str = (char *) realloc(str, 25 * sizeof(char));
    strcat(str, ".com");
    printf("String = %s, Address = %p\n", str, str);

    free(str);

    return 0;
}