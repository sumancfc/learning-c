//
// Write a program to interchnage the content of C and D.
//
#include<stdio.h>

void main()
{
    int C, D, temp;

    printf("Enter the value of C: ");
    scanf("%d", &C);
    printf("Enter the value of D: ");
    scanf("%d", &D);

    temp = C;
    C = D;
    D = temp;

    printf("The interchanged value of C = %d and D = %d", C, D);
}