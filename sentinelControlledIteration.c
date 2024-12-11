//
// Created by sumancfc on 12/11/2024.
//
#include<stdio.h>

void main()
{
    int total = 0;
    int counter = 0;

    printf("%s", "Enter Grade, -1 to end: ");
    int grade = 0;
    scanf("%d", &grade);

    while (grade != -1)
    {
        total = total + grade;
        counter++;
        printf("%s", "Enter Grade, -1 to End: ");
        scanf("%d", &grade);
    }

    if (counter != 0)
    {
        double average =  (double) total / counter;
        printf("Class Average is %.2f\n", average);
    }else
    {
        puts("No Grades were Entered.");
    }
}