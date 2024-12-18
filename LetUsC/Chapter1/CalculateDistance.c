// The distance between two cities (in km) is input through the keyboard.
// Write a program to convert and print this distance in meters, feet, inches and centimeters.
#include<stdio.h>

void main()
{
    float distanceInKM, meters, feets, inches, centimeters;

    printf("Enter the distance between cities in km: ");
    scanf("%f", &distanceInKM);

    meters = distanceInKM * 1000;
    centimeters = meters * 100;
    feets = distanceInKM * 3280.84;
    inches = distanceInKM * 39370.1;

    printf("Distance in Meters: %.2f m\n", meters);
    printf("Distance in Centimeters: %.2f cm\n", centimeters);
    printf("Distance in Feets: %.2f ft\n", feets);
    printf("Distance in Inches: %.2f in\n", inches);
}