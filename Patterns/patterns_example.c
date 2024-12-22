//
// Created by sumancfc on 12/22/2024.
//


#include<stdio.h>

void main()
{
    int number;
    printf("Enter the number:");
    scanf("%d", &number);

    /*for (int i = 0; i < number; i++)
    {
        for (int j = number; j > i; j--)
        {
            printf("%d", j);
        }
        printf("\n");
    }*/

    /*for (int i = 0; i < number; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf(" ");
        }
        for (int j = number; j > i; j--)
        {
            printf("%d", j);
        }
        printf("\n");
    }*/

    /*for (int i = 1; i <= number; i++)
{
    for (int j = 1; j <= i; j++)
    {
        printf("%d", j);
    }
    printf("\n");
}*/

    /*for (int i = 0; i < number; i++)
    {
        for (int j = 1; j <= number - i; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }*/

    /*
    for (int i = 0; i < number; i++)
{
    for (int j = number -i; j > 0; j--)
    {
        printf("%d", j);
    }
    printf("\n");
}
*/

    /*for (int i = 1; i <= number; i++)
    {
        for (int j = 1; j <= number -i; j++)
        {
            printf(" ");
        }
        for (int j = 1; j < i + 1; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }*/

    /*for (int i = 1; i <= number; i++)
    {
        for (int j = number; j > number - i; j--)
        {
            printf("%d", j);
        }
        printf("\n");
    }*/

    for (int i = 1; i <= number; i++)
{
    for (int j = number; j > number - i; j--)
    {
        printf("%d", j);
    }
    printf("\n");
}

}