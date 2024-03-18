#include <stdio.h>

int prime_or_composite(int n); // prime for 0 and composite for 1

int main(){

    int n;
    printf("Enter the number\n> ");
    scanf("%d",&n);

    if (prime_or_composite(n) == 0)
        printf("%d is a prime number", n);
    else
        printf("%d is a composite number", n);

    return 0;
}

int prime_or_composite(int n){

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return 1;
        }
        
    }

    return 0;
    
}