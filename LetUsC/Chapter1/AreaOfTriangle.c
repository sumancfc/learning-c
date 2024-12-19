//
// Write a program to find the area of a triangle if lengths of three sides of atriangfle are given through keyboard.
//
#include<stdio.h>
#include<math.h>

void main()
{
    float sideA, sideB, sideC;
    float semiPerimeter, area;

    printf("Enter the length of Side A, Side b and Side C: \n");
    scanf("%f %f %f", &sideA, &sideB, &sideC);

    semiPerimeter = (sideA + sideB + sideC) / 2;
    area = sqrt(semiPerimeter * (semiPerimeter - sideA) * (semiPerimeter - sideB) * (semiPerimeter - sideC));

    printf("The semi perimeter of an triangle is: %.2f\n", semiPerimeter);
    printf("The area of an triangle is: %.2f\n", area);

}