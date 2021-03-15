/*
Author : R Sanket
Program : 
Date : 14th February 2021
*/

#include <stdio.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char str[100];
    int l, i;

    printf("\nprint individual characters in reverse order\n");
    printf("-----------------------------------------------\n");
    printf("Input the string os size less than %d\n", 100);
    scanf("%[^\n]s", str);

    l = strlen(str);

    for ( i = l; i >= 0; --i)
    {
        printf("%c", str[i]);
    }

    printf("\n");

    return 0;
}