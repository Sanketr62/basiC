/*
Author : R Sanket
Program : Converts strings from one type to another
Date : 6th February 2021
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>; //add this library for 'true' value to be identified in while loop

int main()
{
    double value = 0;
    char str[] = "3.5 2.5 1.26"; //The string to be converted
    char *pstr = str; //Pointer to the string to be converted
    char *ptr =NULL; //POinter to the character position after conversion

    while (true) //infinite loop.'break' makes it stop
    {
        value = strtod(pstr, &ptr); //convert starting at pstr. strtod converts it to double
        if(pstr == ptr) //pstr stored if no conversion...
            break;
        else{
            printf("%f", value); //output the resultant value
            pstr = ptr; //store start for next conversion
        }

    }

    return 0;
}