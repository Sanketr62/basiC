/*
Author : R Sanket
Program : Printing date by using pointers & structures
Date : 9th March 2021
*/

#include <stdio.h>
#include <stdlib.h>
 
struct date{
  int month;
  int day;
  int year;  
};

int main ()
{
    struct date today, *datePtr;

    datePtr = &today;

    datePtr->month = 9;
    datePtr->day = 25;
    datePtr->year = 2015;

    printf("Today's date is %i/%i/%i.\n", datePtr->month, datePtr->day, datePtr->year);

    return 0;
}