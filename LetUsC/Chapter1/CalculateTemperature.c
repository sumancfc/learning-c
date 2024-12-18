// Temperature of a city in Fahrenheit degrees is input throughthe keyboard.
// Write a program to convert this temperature into Centigrade degrees.
#include <stdio.h>

void main()
{
    float temperatuteFahrenheit, temperatureCentigrade;

    printf("Enter the Temperature in Fahrenheit: ");
    scanf("%f", &temperatuteFahrenheit);

    temperatureCentigrade = (temperatuteFahrenheit - 32) * 5 / 9;

    printf("The Temperature in Centigrade is: %.2f°C", temperatureCentigrade);
}