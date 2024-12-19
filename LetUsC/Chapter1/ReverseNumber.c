//
// If a five-digit number is input through the keynoard, write a program to reverse a number.
//
#include<stdio.h>

int main()
{
    int number, reverse = 0, reminder;

    printf("Enter the five digit number: ");
    scanf("%d", &number);

    if (number < 10000 || number > 99999)
    {
        printf("Enter only five digit number.\n");
        return  1;
    }

    while(number != 0)
    {
        reminder = number % 10;
        reverse = reverse * 10 + reminder;
        number /= 10;
    }

    printf("The reverse number of %d is: %d.", number, reverse);
    return 0;
}