/*
Author : R Sanket
Program : reading a file using r
Date : 15th March 2021
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;
    int c;

    fp = fopen("file.txt", "r");

    if (fp == NULL)
    {
        perror("Error opening file");
        return(-1);
    }

    while ((c = fgetc(fp) != EOF))
    {
        printf("%C", c);
    }

    fclose(fp);
    fp = NULL;

    system("read -p 'Press Enter to continue...' var");
    return(0);
}