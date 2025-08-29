#include <stdio.h>

int main() {
    int choice;

    printf("Select an option:\n");
    printf("1. Calculator\n");
    printf("2. Day of the week\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    switch(choice) {
        case 1: {
            // Calculator
            char op;
            double num1, num2, result;

            printf("\nCalculator selected.\n");
            printf("Enter operator (+, -, *, /): ");
            scanf(" %c", &op);

            printf("Enter two operands: ");
            scanf("%lf %lf", &num1, &num2);

            switch(op) {
                case '+':
                    result = num1 + num2;
                    printf("Result: %.2lf\n", result);
                    break;
                case '-':
                    result = num1 - num2;
                    printf("Result: %.2lf\n", result);
                    break;
                case '*':
                    result = num1 * num2;
                    printf("Result: %.2lf\n", result);
                    break;
                case '/':
                    if(num2 != 0)
                        result = num1 / num2;
                    else {
                        printf("Error: Division by zero.\n");
                        break;
                    }
                    printf("Result: %.2lf\n", result);
                    break;
                default:
                    printf("Invalid operator.\n");
            }
            break;
        }

        case 2: {
            // Day of the week
            int day;

            printf("\nDay of the Week selected.\n");
            printf("Enter day number (1 to 7): ");
            scanf("%d", &day);

            switch(day) {
                case 1:
                    printf("Monday\n");
                    break;
                case 2:
                    printf("Tuesday\n");
                    break;
                case 3:
                    printf("Wednesday\n");
                    break;
                case 4:
                    printf("Thursday\n");
                    break;
                case 5:
                    printf("Friday\n");
                    break;
                case 6:
                    printf("Saturday\n");
                    break;
                case 7:
                    printf("Sunday\n");
                    break;
                default:
                    printf("Invalid day number.\n");
            }
            break;
        }

        default:
            printf("Invalid main choice.\n");
    }

    return 0;
}
