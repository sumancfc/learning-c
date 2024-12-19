//
// Write a program to find an odd number or even number.
//
#include<stdio.h>

void main()
{
    int number;

    printf("Enter the Number");
    scanf("%d", &number);

    if (number % 2 == 0)
    {
        printf("It's an Even Number.");
    }else
    {
        printf("It's an Odd Number ");
    }
}