#include <stdio.h>

int main() {
    int n, i = 1;
    printf("Print numbers from 1 to N\n");
    printf("Enter N: ");
    scanf("%d", &n);
    while(i <= n) {
        printf("%d ", i);
        i++;
    }
    printf("\n");

    int num, j = 1;
    printf("multiplication table\n");
    printf("Enter number: ");
    scanf("%d", &num);
    while(j <= 10) {
        printf("%d x %d = %d\n", num, j, num*j);
        j++;
    }

    return 0;
}
