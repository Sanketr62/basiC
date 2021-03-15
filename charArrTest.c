/*
Author : R Sanket
Program : Consists of 3 different functions: 
            1 - to Calculate the length of the string
            2 - to concatenate two strings
            3 - function to find if two strings are equal

Date : 6th February 2021
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

int stringLength (const char string[]); //function to calculate length of the string
void concat (char result[], const char str1[], const char str2[]);
bool equalStrings (const char s1[], const char s2[]);

int main()
{
    const char word1[] = "Sanket";
    const char word2[] = "ok";
    const char word3[] = "whatever";
    char result[50];

    printf("%d    %d    %d\n", stringLength(word1), stringLength(word2), stringLength(word3));
    
    concat (result, word1, word2);
    printf ("\n%s\n", result);

    printf("%d\n", equalStrings("Sanket", "Sanket"));
    printf("%d\n", equalStrings("hastob", "Sanket"));

    return 0;
}

//1. Function to find the length of the string 
int stringLength (const char string[])
{
    int count = 0;

    while (string[count] != '\0')
    {
        ++count;
    }
    
    return count;
}

//2. Function to concatenate two strings
void concat (char result[], const char str1[], const char str2[])
{
    int i, j; //local vaiables

    for ( i = 0; str1[i] != '\0'; ++i)
    {
        result[i] = str1[i]; //store characters from your string in result array
    }

    for (j = 0; str2[j] != '\0'; ++j)
    {
        result[i+j] = str2[j];  /*i+j to concatenate two strings; 
                                for example: if you enter "what" & "name", 4 characters in "what" are stored in i and it is incremented to 4 at the end of loop
                                i+j here means 4+0, 4+1, 4+2... means the characters in string2 are stored in result array, in positions 5,6,7,... */ 
    }

    result[i+j] = '\0'; //add null terminator

}

//3. Function to find if two strings are equal
bool equalStrings (const char s1[], const char s2[])
{
    int i=0;
    bool isEquals = false;

    while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
    {
        ++i;
    }

    if (s1[i] == '\0' && s2[i] == '\0')
    {
        isEquals = true;
    }
    else
    {
        isEquals = false;
    }
    
    return isEquals;
}