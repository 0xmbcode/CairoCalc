#include <stdio.h>

int main() {
    double num1, num2, result;
    char operator;

    // Get user input
    printf("Enter the first number: ");
    scanf("%lf", &num1);

    printf("Enter the second number: ");
    scanf("%lf", &num2);

    printf("Choose the operation (+, -, *, /): ");
    scanf(" %c", &operator);

    // Perform basic calculations
    switch(operator) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
            } else {
                printf("Error: Division by zero!\n");
                return 1;  // Terminate the program with an error code
            }
            break;
        default:
            printf("Invalid operator entered!\n");
            return 1;  // Terminate the program with an error code
    }

    // Print the result to the screen
    printf("Result: %lf\n", result);

    return 0;  // Program terminated successfully
}
