/*
Author : R Sanket
Program : Counts the number of characters present in a string
Date : 5th February 2021
*/

#include <stdio.h>

int main()
{
    char str1[] = "To be or not to be"; //Declare your string
    char str2[] = ", that is the question";
    unsigned int count = 0; //Stores the length of string

    while (str1[count]!='\0') //increment count till we reach terminating character - '\0'
    {
        ++count;
    }

    printf("The length of the string \"%s\" is %d chacracters.\n", str1, count);

    count = 0; //Reset count to 0 for next string
    while (str2[count]!='\0')
    {
        ++count;
    }
        
    printf("THe length of the string \"%s\" is %d characters.\n", str2, count);

    return 0;
}