#include <stdio.h>

int main(){

    float length, width, perimeter;

    printf("Enter length (in cm): ");
    scanf("%f",&length);

    printf("Enter width (in cm): ");
    scanf("%f",&width);

    perimeter = 2*(length+width);

    printf("Perimeter of a rectangle with length %f cm and width %f cm is %f cm.", length, width, perimeter);

    return 0;
}