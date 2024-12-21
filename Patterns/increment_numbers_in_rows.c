#include<stdio.h>

void main()
{
    int number;
    int counter = 1;

    printf("Enter the number:");
    scanf("%d", &number);

    for(int i = 1; i <= number; i++)
    {
        for(int j = 1; j <= i; j++) {
            printf(" %d ", counter++); // Print current number and increment count
        }
        printf("\n");
    }
}