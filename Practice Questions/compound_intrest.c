#include <stdio.h>
#include <math.h>

float calculate_compound_intrest(float P, float R, float n);

int main()
{

    // ! A = P(1 + (R/100))^n
    /*
     * A is final amount
     * P is pricipal amount
     * R is rate
     * n is number of years
     */
    // ! (CI) = A – P

    float CI = calculate_compound_intrest(12600, 10, 2);
    // printf("%f\n", CI);
    printf("%.2f\n", CI);


    return 0;
}

float calculate_compound_intrest(float P, float R, float n)
{
    float a = (1 + (R / 100));
    float temp;
    a = pow(a, n);    
    float A = P * a;
    return A - P;
}