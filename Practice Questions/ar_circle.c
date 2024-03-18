#include <stdio.h>

int main(){

    float radius, area;
    const float pi = 3.14;

    printf("Enter the radius of the circle (in cm): ");
    scanf("%f",&radius);

    area = pi*radius*radius;

    printf("Area of the circle with radius %f cm is %f cm square\n", radius, area);

    

    return 0;
}