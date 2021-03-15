/*
Author : R Sanket
Program : Dynamically allocate memory location for input string after reading input from the user
Date : 28th February 2021
*/

#include <stdio.h>
#include <stdlib.h>
 
int main(int argc, char * argv)
{
 
    char *str = NULL;
    int len = 0;

    printf("Enter the size of your string: ");
    scanf("%d", &len);
    getchar();

    str = (char *) malloc((len+1) * sizeof(int));

    if(str != NULL)
    {
        printf("Memory suscessfully allocated, please enter your string: ");

        fgets(str, (len+1), stdin);

        printf("Your string: %s\n", str);
        free(str);
    }
 
    return 0;
}