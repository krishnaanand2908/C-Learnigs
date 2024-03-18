#include <stdio.h>

int main(){

    int num1, num2, sum;

    printf("Enter first integer: ");
    scanf("%d",&num1);

    printf("Enter second integer: ");
    scanf("%d",&num2);

    sum = num1 + num2;

    printf("%d + %d = %d",num1,num2,sum); // ! alternate method: printf("%d + %d = %d",num1,num2, num1+num2);

    return 0;
}