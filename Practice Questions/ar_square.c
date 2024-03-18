#include <stdio.h>

int main(){

    float side, area;

    printf("How long is one side of your square? (in cm)\n---> ");
    scanf("%f", &side);

    area = side*side;

    printf("Area of the square with side %f cm in length is %f cm square.", side, area);

    return 0;
}