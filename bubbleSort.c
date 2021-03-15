/*
Author : R Sanket
Program : A prohram which bubble sorts a 5 digit number in ascending order.
Date : 14th February 2021
*/

#include <stdio.h>
#include <string.h>

int main()
{
    char a[6];
    int i, temp;
    int j = 0;

    printf("Enter a 5 digit number\n");
    scanf("%s", a);

    printf("You entered : %s\n", a);

for ( i = 0 ; i < 5 ; i++ )
{
    for ( j = 1 ; j < 6 - 1 - i ; ++j )
    {
        if ( a[j-1] > a[j] )
        {
            temp = a[j-1];
            a[j-1] = a[j];
            a[j] = temp;
        }
    }
}
    
    printf("Bubble Sorted number : %s\n", a);

    return 0;
}