#include <stdio.h>

int add(int a, int b) { return a + b; }
int subtract(int a, int b) { return a - b; }
int multiply(int a, int b) { return a * b; }
float divide(int a, int b) { return (float)a / b; }

int main() {
    int a, b, choice;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("1. Add\n2. Subtract\n3. Multiply\n4. Divide\nEnter choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1: printf("Result: %d\n", add(a, b)); break;
        case 2: printf("Result: %d\n", subtract(a, b)); break;
        case 3: printf("Result: %d\n", multiply(a, b)); break;
        case 4: printf("Result: %.2f\n", divide(a, b)); break;
        default: printf("Invalid choice!\n");
    }
    return 0;
}
