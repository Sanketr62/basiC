/*
Author : R Sanket
Program : Seperates a string using tokens(a character which seperates a sentence in words '-' in this case)
Date : 5th February 2021
*/

#include <stdio.h>
#include <string.h>

int main()
{
    char str[80] = "Hello how are you - my name is - Sanket";
    const char s[2] = "-";
    char *token;

    //get the first token
    token = strtok(str,s);

    //walk through other token
    while (token != NULL) {
        printf("%s\n", token);

        token = strtok(NULL, s);
    }

    return 0;
}