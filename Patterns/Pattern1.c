//
// 1
// 22
// 333
// 4444
// 55555
//
#include<stdio.h>

void main()
{
    int number;

    printf("Enter a number:");
    scanf("%d", &number);

    for(int i = 1; i <= number; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            printf(" %d ", i);
        }
    printf("\n");
    }
}