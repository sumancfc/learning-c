#include<stdio.h>
#include <stdlib.h>
#include <time.h>

void main()
{
    // get random number between 0 and 99
    srand(time(0)); // Seed the random number generator with the current time
    int lottery = rand() % 100;

    int guessNumber;
    printf("Enter your lottery pick (two digits):");
    scanf("%d", &guessNumber);

    int guessDigit1 = guessNumber / 10;
    int guessDigit2 = guessNumber % 10;

    int lotteryDigit1 = lottery / 10;
    int lotteryDigit2 = lottery % 10;

    printf("The lottery number is: %d\n", lottery);

    if (guessNumber == lottery)
    {
        printf("Exact match: you win $10,000");
    }else if (guessDigit1 == lotteryDigit2 && guessDigit2 == lotteryDigit1 )
    {
        printf("Match all digits: you win $3,000");
    }else if (guessDigit1 == lotteryDigit1 || guessDigit1 == lotteryDigit2 || guessDigit2 == lotteryDigit1 || guessDigit2 == lotteryDigit2)
    {
        printf("Match one digit: you win $1,000");
    }else
    {
        printf("Sorry, no match");
    }

}
