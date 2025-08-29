#include <stdio.h>

int main() {
    int n, i = 1;
    printf("Program 1: Print numbers from 1 to N\n");
    printf("Enter the value of N: ");
    scanf("%d", &n);

    printf("Numbers from 1 to %d:\n", n);
    do {
        printf("%d ", i);
        i++;
    } while(i <= n);

    printf("\n");

    int num, j = 1;
    printf("Program 2: Multiplication table\n");
    printf("Enter a number to print its multiplication table: ");
    scanf("%d", &num);

    printf("Multiplication table of %d:\n", num);
    do {
        printf("%d x %d = %d\n", num, j, num * j);
        j++;
    } while(j <= 10);

    return 0;
}
