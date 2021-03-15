/*
Author : R Sanket
Program : Initializing structure and using it to print out values
Date : 12th March 2021
*/

#include <stdio.h>
#include <stdlib.h>
 
struct employee{
  char name[30];
  char date[15];
  float salary;  
};

int main()
{
    /* declaration and initialisation of structure*/
    struct employee emp = {"Mike", "7/16/2015", 74840.00f};

    printf("\n Name: %s", emp.name);
    printf("\n HIre date: %s", emp.date);
    printf("\n Salary: %.2f\n", emp.salary);

    printf("\n Enter employee information: \n");
    printf("\n ----------------------------- \n");

    printf("Name: ");
    scanf("%s", emp.name);

    printf("\nHire date: ");
    scanf("%s", emp.date);

    printf("\nSalary: ");
    scanf("%f", &emp.salary);


    printf("\n Name: %s", emp.name);
    printf("\n HIre date: %s", emp.date);
    printf("\n Salary: %.2f\n", emp.salary);


    return 0;
}