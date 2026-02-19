#include <stdio.h>

int main() {
    int num1, num2, choice;
    char again;
    do {
        printf("\n---- Simple Calculator ----\n");
        printf("1. Addition (+)\n");
        printf("2. Subtraction (-)\n");
        printf("3. Multiplication (*)\n");
        printf("4. Division (/)\n");
        printf("Enter your choice (1-4): ");
        scanf("%d", &choice);
        printf("Enter first number: ");
        scanf("%d", &num1);
        printf("Enter second number: ");
        scanf("%d", &num2);
        if(choice == 1) {
            printf("Result = %d\n", num1 + num2);
        }
        else if(choice == 2) {
            printf("Result = %d\n", num1 - num2);
        }
        else if(choice == 3) {
            printf("Result = %d\n", num1 * num2);
        }
        else if(choice == 4) {
            if(num2 != 0)
                printf("Result = %d\n", num1 / num2);
            else
                printf("Error! Division by zero not allowed.\n");
        }
        else {
            printf("Invalid Choice!\n");
        }
        printf("\nDo you want to continue? (y/n): ");
        scanf(" %c", &again);
    } while(again == 'y' || again == 'Y');
    printf("Calculator Closed.\n");
    return 0;
}
