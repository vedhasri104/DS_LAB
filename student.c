#include <stdio.h>

// Define the structure
struct Student {
    char name[50];
    int age;
    float totalMarks;
};

int main() {
    struct Student s1, s2;
    float average;

    // Input data for two students
    printf("Enter details for Student 1 (Name, Age, Marks): ");
    scanf(" %[^\n]%d%f", s1.name, &s1.age, &s1.totalMarks);

    printf("Enter details for Student 2 (Name, Age, Marks): ");
    scanf(" %[^\n]%d%f", s2.name, &s2.age, &s2.totalMarks);

    // Display information
    printf("\nStudent 1: %s, %d, %.2f", s1.name, s1.age, s1.totalMarks);
    printf("\nStudent 2: %s, %d, %.2f", s2.name, s2.age, s2.totalMarks);

    // Calculate and display average marks
    average = (s1.totalMarks + s2.totalMarks) / 2;
    printf("\nAverage Marks: %.2f\n", average);

    return 0;
}