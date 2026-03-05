#include <stdio.h>

#define MAX 100

// Function to calculate average using pointer
float calculateAverage(int *arr, int n) {
    int sum = 0;
    for(int i = 0; i < n; i++) {
        sum += *(arr + i);   // pointer arithmetic
    }
    return (float)sum / n;
}

// Function to find highest mark
int findHighest(int *arr, int n) {
    int max = arr[0];
    for(int i = 1; i < n; i++) {
        if(*(arr + i) > max) {
            max = *(arr + i);
        }
    }
    return max;
}

// Function to assign grade
char getGrade(int marks) {
    if(marks >= 90)
        return 'A';
    else if(marks >= 75)
        return 'B';
    else if(marks >= 50)
        return 'C';
    else
        return 'F';
}

int main() {
    int n;
    int marks[MAX];

    printf("Enter number of students: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        printf("Enter marks for student %d: ", i + 1);
        scanf("%d", &marks[i]);
    }

    printf("\n--- Student Report ---\n");

    for(int i = 0; i < n; i++) {
        printf("Student %d -> Marks: %d | Grade: %c\n",
               i + 1, marks[i], getGrade(marks[i]));
    }

    float avg = calculateAverage(marks, n);
    int highest = findHighest(marks, n);

    printf("\nClass Average: %.2f\n", avg);
    printf("Highest Marks: %d\n", highest);

    return 0;
}