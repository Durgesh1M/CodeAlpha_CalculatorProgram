#include <stdio.h>
#include <stdlib.h>

int main() {
    int choice;
    double num1, num2, result;

    while (1) {
        // Menu Display
        printf("\n===================================\n");
        printf("    CODEALPHA ARITHMETIC CALCULATOR\n");
        printf("===================================\n");
        printf("1. Addition (+)\n");
        printf("2. Subtraction (-)\n");
        printf("3. Multiplication (*)\n");
        printf("4. Division (/)\n");
        printf("5. Exit\n");
        printf("-----------------------------------\n");
        printf("Enter your choice (1-5): ");
        scanf("%d", &choice);

        // Exit condition
        if (choice == 5) {
            printf("\nExiting the Calculator. Thank you!\n");
            break;
        }

        // Check for invalid menu choice before asking for numbers
        if (choice < 1 || choice > 5) {
            printf("\nError: Invalid choice! Please select a valid option between 1 and 5.\n");
            continue;
        }

        // Input Numbers
        printf("Enter first number: ");
        scanf("%lf", &num1);
        printf("Enter second number: ");
        scanf("%lf", &num2);

        // Operation selection using switch case
        switch (choice) {
            case 1:
                result = num1 + num2;
                printf("\nResult: %.2lf + %.2lf = %.2lf\n", num1, num2, result);
                break;

            case 2:
                result = num1 - num2;
                printf("\nResult: %.2lf - %.2lf = %.2lf\n", num1, num2, result);
                break;

            case 3:
                result = num1 * num2;
                printf("\nResult: %.2lf * %.2lf = %.2lf\n", num1, num2, result);
                break;

            case 4:
                // Handle division by zero error
                if (num2 == 0) {
                    printf("\nError: Division by zero is not allowed!\n");
                } else {
                    result = num1 / num2;
                    printf("\nResult: %.2lf / %.2lf = %.2lf\n", num1, num2, result);
                }
                break;

            default:
                printf("\nSomething went wrong!\n");
        }
    }

    return 0;
}
