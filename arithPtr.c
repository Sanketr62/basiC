/*
Author : R Sanket
Program : DVisualisation of dereferencing a pointer by using arithmatic operation
Date : 28rd February 2021
*/

#include <stdio.h>
#include <string.h>

int main(void)
{
    int i;
    
    char multiple[] =  "A string";
    char *ptr = multiple;

    for ( i = 0; i < strlen(multiple); ++i )
    {
        printf("multiple[%d] = %c  *(ptr+%d) = %c  &multiple[%d] = %p  ptr+%d = %p\n",
        i, multiple[i], i, *(ptr+i), i, &multiple[i], i, ptr+i);
    }

    return 0;
}