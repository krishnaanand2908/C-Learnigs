#include <stdio.h>
#include <stdlib.h>

int prime_or_composite(int n);

int main(){

    system("cls");

    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int len_arr = sizeof(arr)/sizeof(arr[0]), prime_index = 0, composite_index = 0;
    int primes[len_arr];
    int composites[len_arr];

    for (int i = 0; i < len_arr; i++)
    {
        if (prime_or_composite(arr[i]) == 0){
            primes[prime_index] = arr[i];
            prime_index++;
        }

        else if (prime_or_composite(arr[i]) == 1){
            composites[composite_index] = arr[i];
            composite_index++;
        }
    }

    printf("PRIMES\n");
    for (int j = 0; j < prime_index; j++)
    {
        printf("%d\n", primes[j]);
    }

    printf("COMPOSITES\n");
    for (int k = 0; k < composite_index; k++)
    {
        printf("%d\n", composites[k]);
    }

    return 0;
}

int prime_or_composite(int n){

    if (n < 2) {
        return 2; // Not prime or composite
    }

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return 1; // Composite
        }
    }

    return 0; // Prime
}
