/*
Author : R Sanket
Program : A program which bubble sorts strings comparing their first alphabet.
Date : 14th February 2021
*/

#include <stdio.h>
#include <string.h>

int main()
{
    int i, n, j;
    char name[25][50], temp[25];

    printf("Enter the number of strings you want to be sorted : \n");
    scanf("%d", &n);

    printf("Input %d strings : \n", n);

    for ( i = 0; i < n; i++)
    {
        scanf("%s", name[i]);
    }
    
    printf("\n");

    for ( i = 1; i < n; i++)
    {
        for ( j = 0; j <= n - 1 ; j++)
        {
            if (strcmp(name[j], name[j+1]) > 0 )
            {
                strncpy(temp, name[j], sizeof(temp) - 1);
                strncpy(name[j], name[j+1], sizeof(name[j]) - 1);
                strncpy(name[j+1], temp, sizeof(name[j] + 1) - 1);

            }
            
        }
        
    }

    printf("The strings appear after sorting : \n");

    for ( i = 0; i < n; i++)
    {
        printf("%s\n", name[i]);
    }
    
    

    return 0;
}