//
// 1
// 1 2
// 1 2 3
// 1 2 3 4
// 1 2 3 4 5
//
#include<stdio.h>

void main()
{
    int number;

    printf("Enter the number:");
    scanf("%d", &number);

    for (int i = 1; i <= number; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf(" %d ", j);
        }

        printf("\n");
    }
}