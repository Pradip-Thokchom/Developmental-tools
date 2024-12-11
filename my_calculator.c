#include <stdio.h>

// Function declarations
void add();
void subtract();
void multiply();
void divide();

int main() {
    int choice;

    // Display menu
    printf("Simple Calculator Program\n");
    printf("Select an operation:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Exit\n");
    printf("Enter your choice (1/2/3/4/5): ");
    scanf("%d", &choice);

    // Perform corresponding operation based on user input
    switch (choice) {
        case 1:
            add();
            break;
        case 2:
            subtract();
            break;
        case 3:
            multiply();
            break;
        case 4:
            divide();
            break;
        case 5:
            printf("Exiting the program...\n");
            break;
        default:
            printf("Invalid choice! Please try again.\n");
            break;
    }

    return 0;
}

// Function to perform addition
void add() {
    float num1, num2;
    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);
    printf("Result: %.2f\n", num1 + num2);
}

// Function to perform subtraction
void subtract() {
    float num1, num2;
    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);
    printf("Result: %.2f\n", num1 - num2);
}

// Function to perform multiplication
void multiply() {
    float num1, num2;
    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);
    printf("Result: %.2f\n", num1 * num2);
}

// Function to perform division
void divide() {
    float num1, num2;
    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);

    if (num2 != 0) {
        printf("Result: %.2f\n", num1 / num2);
    } else {
        printf("Error! Division by zero.\n");
    }
}

