#include <stdio.h>

void printNaturalNumbers() {
    int n;
    printf("Enter the value of N: ");
    scanf("%d", &n);

    printf("First %d natural numbers:\n", n);
    for(int i = 1; i <= n; i++) {
        printf("%d ", i);
    }
    printf("\n");
}

void printMultiplicationTable() {
    int num;
    printf("Enter a number to print its multiplication table: ");
    scanf("%d", &num);

    printf("Multiplication table of %d:\n", num);
    for(int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", num, i, num * i);
    }
    printf("\n");
}

int main() {
    printNaturalNumbers();
    printMultiplicationTable();

    return 0;
}
