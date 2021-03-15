/*
Author : R Sanket
Program : calculating the length of a string using pointer arithmetic
Date : 28th February 2021
*/

#include <stdio.h>
#include <string.h>

int stringLength(const char *string);

int main(void)
{
    printf("%d \n", stringLength("stringLength test"));
    printf("%d \n", stringLength(""));
    printf("%d \n", stringLength("Sanket"));

    return 0;
}

int stringLength(const char *string)
{
    const char *lastAddress = string;

    while (*lastAddress)
        ++lastAddress;

        return lastAddress - string;

}