#include <stdio.h>

int main() {
    int num, marks;

    // user input
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Enter student percentage: ");
    scanf("%d", &marks);

    // Simple if
    if (num > 10) {
        printf("1.Simple if:Number is greater than 10\n");
    }

    // if-else
    if (num % 2 == 0) {
        printf("2.if-else:Number is even\n");
    } else {
        printf("2.if-else:Number is odd\n");
    }

    // nested if-else
    if (num > 0) {
        if (num < 20) {
            printf("3.nested if-else:Number is positive and less than 20\n");
        } else {
            printf("3.nested if-else:Number is positive and 20 or more\n");
        }
    } else {
        printf("3.nested if-else:Number is zero or negative\n");
    }

    // else-if ladder
    printf("4.else-if ladder:Grade based on precentage (%d): ", marks);
    if (marks >= 90) {
        printf("A\n");
    } else if (marks >= 75) {
        printf("B\n");
    } else if (marks >= 60) {
        printf("C\n");
    } else if (marks >= 40) {
        printf("D\n");
    } else {
        printf("F\n");
    }

    return 0;
}
