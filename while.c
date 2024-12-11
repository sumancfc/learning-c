//
// Created by sumancfc on 12/11/2024.
//
#include<stdio.h>

void main()
{
    int product=2;

    while(product <= 1024)
    {
        product = 2 * product;
        printf("Product: %d\n", product);
    }
}