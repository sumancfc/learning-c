#include<stdio.h>

void main()
{
    int number;

    printf("Enter the number:");
    scanf("%d", &number);

    for(int i = 0; i < number; i++)
    {
        for(int j = 0; j < i; j++)
        {
            printf(" "); // Print Space
        }
        for(int j = 0; j <  number - i; j++)
        {
            printf("*"); // Print *
        }
        printf("\n");
    }
}