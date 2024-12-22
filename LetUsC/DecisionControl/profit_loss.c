//
// Write a program to find a profit or loss.
//
#include<stdio.h>

void main()
{
    float costPrice, sellingPrice;

    printf("Enter the Cost price: ");
    scanf("%f", &costPrice);
    printf("Enter the Selling price: ");
    scanf("%f", &sellingPrice);

    float profit = sellingPrice - costPrice;
    float loss = costPrice - sellingPrice;

    if (sellingPrice > costPrice)
    {
        printf("The seller has made profit.\n");
        printf("The profit amount is: %.2f\n", profit);
    }else
    {
        printf("The seller has made loss.\n");
        printf("The loss amount is: %.2f\n", loss);
    }
}
