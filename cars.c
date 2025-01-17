#include <stdio.h>

struct Car {
    int carID;
    char model[50];
    float rate;
};

int main() {
    struct Car cars[3];
    int days, i;
    float totalCost = 0;

    // Input data for cars
    for (i = 0; i < 3; i++) {
        printf("Enter details for Car %d (ID, Model, Rate): ", i + 1);
        scanf("%d %[^\n] %f", &cars[i].carID, cars[i].model, &cars[i].rate);
    }

    // Input rental days
    printf("Enter number of rental days: ");
    scanf("%d", &days);

    // Calculate and display rental cost
    for (i = 0; i < 3; i++) {
        totalCost += cars[i].rate * days;
        printf("Car %d - ID: %d, Model: %s, Cost: %.2f\n", 
               i + 1, cars[i].carID, cars[i].model, cars[i].rate * days);
    }

    printf("Total Rental Cost: %.2f\n", totalCost);
    return 0;
}