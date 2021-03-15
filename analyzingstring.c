/*
Author : R Sanket
Program : Counts number of characters in entire string based on their type
Date : 5th February 2021
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char buf[100]; //input buffer
    int nLetters = 0; //number of letters in input
    int nDigits = 0; //number of digits in input
    int nPunct = 0; //number of punctuation characters

    printf("Enter an interesting string of less than %d characters:\n", 100);
    scanf("%s", buf); //read a string input in buffer

    int i = 0; //buffer index

    while (buf[i])
    {
        if (isalpha(buf[i])) { //isalpha is a function to check passed character is an alphabet or not.
            ++nLetters; //increment letter count
        }

        if (isdigit(buf[i]))
        {
            
            ++nDigits; //increment digit count
        }
        
        if (ispunct(buf[i]))
        {
            ++nPunct; //increment punctuation count
        }
        ++i;
    }

    printf("\nYour string contained %d alphabets, %d digits and %d punctuation characters\n", nLetters, nDigits, nPunct );
    

    return 0;
}