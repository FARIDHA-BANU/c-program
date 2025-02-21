#include <stdio.h>

int main() {
    float num1, num2, result;
    int choice;

    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);

    printf("\nChoose an operation (1: +, 2: -, 3: *, 4: /): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            result = num1 + num2;
            printf("Result: %.2f\n", result);
            break;
        case 2:
            result = num1 - num2;
            printf("Result: %.2f\n", result);
            break;
        case 3:
            result = num1 * num2;
            printf("Result: %.2f\n", result);
            break;
        case 4:
            if (num2 != 0) {
                result = num1 / num2;
                printf("Result: %.2f\n", result);
            } else {
                printf("Error: Division by zero.\n");
            }
            break;
        default:
            printf("Invalid choice.\n");
            break;
    }

    return 0;
}
