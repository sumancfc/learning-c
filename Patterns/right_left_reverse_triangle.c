#include<stdio.h>

void main()
{
    int number;

    printf("Enter the number:");
    scanf("%d", &number);

    for(int i = 1; i <= number; i++)
    {
        for(int j = i - 1; j < number; j++)
        {
            printf(" * "); // Print *
        }
        printf("\n");
    }
}