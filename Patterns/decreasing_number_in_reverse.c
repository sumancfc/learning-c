#include<stdio.h>

void main()
{
    int number;

    printf("Enter the number:");
    scanf("%d", &number);

    for(int i = 0; i < number; i++)
    {
        for(int j = number - i; j > 0; j--)
        {
            printf("%d", j); // Print Space
        }
        printf("\n");
    }
}