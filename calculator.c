#include <stdio.h>

int main() {
    double num1, num2, result;
    char operation;
    char choice;
    int keep_running = 1;

    printf("====================================\n");
    printf("     WELCOME TO YOUR C CALCULATOR   \n");
    printf("====================================\n\n");

    // Main program loop using a basic while loop
    while (keep_running == 1) {

        // Step 1: Get the first number
        printf("Enter the first number: ");
        scanf("%lf", &num1);

        // Step 2: Get the operator
        printf("Enter an operator (+, -, *, /): ");
        scanf(" %c", &operation); // Notice the leading space before %c to handle whitespace

        // Step 3: Get the second number
        printf("Enter the second number: ");
        scanf("%lf", &num2);

        // Step 4: Perform calculation using conditional logic (if-else)
        if (operation == '+') {
            result = num1 + num2;
            printf("\nResult: %.2lf + %.2lf = %.2lf\n", num1, num2, result);
        } else if (operation == '-') {
            result = num1 - num2;
            printf("\nResult: %.2lf - %.2lf = %.2lf\n", num1, num2, result);
        } else if (operation == '*') {
            result = num1 * num2;
            printf("\nResult: %.2lf * %.2lf = %.2lf\n", num1, num2, result);
        } else if (operation == '/') {
            // Check for division by zero using conditional logic
            if (num2 != 0) {
                result = num1 / num2;
                printf("\nResult: %.2lf / %.2lf = %.2lf\n", num1, num2, result);
            } else {
                printf("\nError: Division by zero is not allowed!\n");
            }
        } else {
            printf("\nError: '%c' is an invalid operator!\n", operation);
        }

        // Step 5: Ask user if they want to calculate again
        printf("\nDo you want to perform another calculation? (y/n): ");
        scanf(" %c", &choice);

        // Check user response using conditional statement
        if (choice == 'n' || choice == 'N') {
            keep_running = 0; // Breaks the loop condition
        }

        printf("\n------------------------------------\n\n");
    }

    printf("Thank you for using the calculator! Goodbye.\n");
    return 0;
}