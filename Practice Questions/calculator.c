#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>

int main() {
    float a, b, result;
    char opr;
    
    while (1) {
        system("cls");
        printf("Welcome to Mathematical Calculator\n");

        printf(
            "Enter the operation\n"
            "+ for addition\n"
            "- for subtraction\n"
            "* for multiplication\n"
            "/ for division\n"
            "^ for exponentiation: 'a' is base and 'b' is power\n"
            "> ");
        scanf(" %c", &opr); // Read the operator

        printf("Enter first number\n> ");
        scanf("%f", &a);

        printf("Enter second number\n> ");
        scanf("%f", &b);

        switch (opr) {
            case '+':
                result = a + b;
                break;

            case '-':
                result = a - b;
                break;

            case '*':
                result = a * b;
                break;

            case '/':
                if (b == 0) {
                    printf("Error: Division by zero\n");
                    break; // Exit switch statement
                }
                result = a / b;
                break;

            case '^':
                result = pow(a, b);
                break;

            default:
                printf("Please enter a valid operator!\n");
                continue; // Restart the loop
        }

        printf("%f %c %f = %f\n", a, opr, b, result);
        printf("Press any key to continue...");
        getch(); // Wait for a key press before continuing
    }

    return 0;
}
