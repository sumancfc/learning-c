//
// Created by sumancfc on 12/11/2024.
//
#include<stdio.h>

int main(void)
{
    int total = 0;
    int counter = 1;

    while(counter<=10)
    {
        printf("Enter Grade: ", " %s");
        int grade = 0;
        scanf("%d", &grade);
        total = total + grade;
        counter++;
    }

    float average = total / 10;
    printf("Class Average is %f\n", average);
}