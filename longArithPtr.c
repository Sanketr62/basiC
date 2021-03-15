/*
Author : R Sanket
Program : Visualisation of dereferencing a pointer by using arithmatic operation using long arrays
Date : 28th February 2021
*/

#include <stdio.h>
#include <string.h>

int main(void)
{
    int i;
    
    long multiple[] =  {15L, 25L, 35L, 45L};
    long *ptr = multiple;

    for ( i = 0; i < sizeof(multiple)/sizeof(multiple[0]); ++i )
    {
        printf("address p+%d  (&multiple[%d]: %llu  *(p+%d)  value: %ld\n",
        i, i, (unsigned long long)(ptr+i), i, *(ptr+i));
    }

    printf("\n  Type long occupies: %d bytes\n", (int)sizeof(long));

    return 0;
}