/*
Author : R Sanket
Program : Initializing pointer structure and using it to print out values
Date : 13th March 2021
*/

#include <stdio.h>
#include <stdlib.h>
 
struct item{
  char *itemName;
  int qty;
  float price;
  float amount;  
};

void readItem(struct item *i);
void printItem(struct item *i);

int main()
{
    struct item itm;
    struct item *pitem;

    pitem = &itm;

    pitem->itemName = (char *) malloc(30 * sizeof(char));

    if(!pitem)
        exit(-1);

    //read item
    readItem(pitem);

    //print item
    printItem(pitem);

    free(pitem->itemName);

    return 0;
}

void readItem(struct item *i)
{
    printf("Enter product name: ");
    scanf("%s", i->itemName);

    printf("\nEnter price: ");
    scanf("%f", &i->price);    
    
    printf("\nEnter quantity: ");
    scanf("%d", &i->qty);

    i->amount = (float)i->qty * i->price;

}

void printItem(struct item *i)
{
    printf("\nNaame: %s", i->itemName);
    printf("\nprice: %.2f", i->price);
    printf("\nquantity: %d", i->qty);
    printf("\nTotal amount: %.2f\n", i->amount);
}