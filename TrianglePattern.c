//
// Print Pattern
//
#include<stdio.h>

void main()
{
    int number;

    printf("Enter the number:");
    scanf("%d", &number);

    // Print Triangle from left to right
    for(int i = 1; i <= number; i++)
    {
     for(int j = 1; j <= i; j++)
     {
         printf("*");
     }
        printf("\n"); // New Line
    }


    // Print Triangle from right to left
    for(int i = 1; i <= number; i++ )
    {
        for (int j = 1; j < number - i + 1; j++)
        {
            printf(" "); // Print Space
        }

        for (int j = 1; j <= i; j++)
        {
            printf("*"); // Print *
        }

        printf("\n"); // New Line
    }
}