//
// Created by sumancfc on 12/15/2024.
//
#include<stdio.h>

void main(){
    int principle, time;
    float rate, total;

    printf("Enter the Principal Amount: ");
    scanf("%d", &principle);
    printf("Enter the Rate of Interest: ");
    scanf("%f", &rate);
    printf("Enter the Time: ");
    scanf("%d", &time);

    total  = (principle * rate * time ) / 100;

    printf("Total sum is: %f", total);
}