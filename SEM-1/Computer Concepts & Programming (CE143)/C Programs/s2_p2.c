
/*The distance between two cities (in km) is input through the keyboard.
 Write a program to convert and print its distance in meters, feet, inches
 and centimeters.*/

#include <stdio.h>
int main()
{
    float km, m, cm, ft, in;
    
    printf("Enter distance in kilometers: ");
    scanf("%f", &km);

    m = km * 1000;
    cm = km * 1000 * 100;
    ft = km * 3280.84;
    in = km * 39370.08;

    printf("\nThe distance in Feet: %f\n", ft);
    printf("The distance in Inches: %f\n", in);
    printf("The distance in Meters: %f\n", m);
    printf("The distance in Centimeters: %f\n", cm);

    return (0);
}