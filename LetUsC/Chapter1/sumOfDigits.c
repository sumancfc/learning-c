//
// 5 digit number is given through keyboard. Calculate the sum of digits.
//
#include<stdio.h>

int main()
{
    int number, sum = 0;

    printf("Enter a five digit number: ");
    scanf("%d", &number);

    if (number < 10000 || number > 99999)
    {
        printf("Enter a valid five digit number.\n");
        return 1;
    }

    while (number != 0)
    {
        sum += number % 10;
        number /= 10;
    }

    printf("The sum of a digit is: %d\n", sum);
    return  0;
}