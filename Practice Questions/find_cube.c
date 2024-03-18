#include <stdio.h>

int main(){

    float n;

    printf("Enter your number: ");
    scanf("%f", &n);

    printf("%f cubed is %f\n",n, n*n*n);

    return 0;
}